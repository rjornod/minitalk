/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:58:40 by rojornod          #+#    #+#             */
/*   Updated: 2025/03/03 12:23:16 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

volatile sig_atomic_t data[3] = {0, 0, 0};

void	signal_handler(int signal, siginfo_t *info, void *context)
{
	(void)context;
	if (signal == SIGUSR1)
		data[0]= data[0] << 1 | 1;
	else if (signal == SIGUSR2)
		data[0]= data[0] << 1 | 0;
	data[1]++;
	data[2] = info->si_pid;
}

void	activate_signal_action(void)
{
	struct sigaction action;

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
	{
		pause();
		if (data[1] == 8)
		{
			ft_printf("%c", data[0]);
			data[0] = 0;
			data[1] = 0;
		}
		kill(data[2], SIGUSR1);
	}
	return (0);
}
