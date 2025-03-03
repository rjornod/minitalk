/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:58:40 by rojornod          #+#    #+#             */
/*   Updated: 2025/03/03 14:11:47 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

volatile sig_atomic_t	g_data[3] = {0, 0, 0};

void	signal_handler(int signal, siginfo_t *info, void *context)
{
	(void)context;
	if (signal == SIGUSR1)
		g_data[0] = g_data[0] << 1 | 1;
	else if (signal == SIGUSR2)
		g_data[0] = g_data[0] << 1 | 0;
	g_data[1]++;
	if (g_data[1] == 8)
	{
		ft_printf("%c", g_data[0]);
		g_data[0] = 0;
		g_data[1] = 0;
	}
	g_data[2] = info->si_pid;
	kill(g_data[2], SIGUSR1);
}

void	activate_signal_action(void)
{
	struct sigaction	action;

	action.sa_flags = SA_SIGINFO;
	action.sa_sigaction = &signal_handler;
	sigemptyset(&action.sa_mask);
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	activate_signal_action();
	while (1)
		pause();
	return (0);
}
