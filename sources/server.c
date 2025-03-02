/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:58:40 by rojornod          #+#    #+#             */
/*   Updated: 2025/03/02 18:02:47 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

volatile sig_atomic_t data[2] = {0,0};

void	sigusr1_handler(int signal, siginfo_t *info, void *context)
{
	(void)context;
	if (signal == SIGUSR1)
	{
		data[0]= data[0] << 1 | 1;
		data[1]++;
		write(STDOUT_FILENO, "1", 1);
		kill(info->si_pid, SIGUSR1);
	}
}

void	sigusr2_handler(int signal, siginfo_t *info, void *context)
{
	(void)context;
	if (signal == SIGUSR2)
	{
		data[0]= data[0] << 1 | 0;
		data[1]++;
		write(STDOUT_FILENO, "0", 1);
		kill(info->si_pid, SIGUSR1);
	}
}

void	activate_signal_action(void)
{
	struct sigaction action1;
	struct sigaction action2;

	memset(&action1, 0, sizeof(action1));
	action2.sa_flags = SA_SIGINFO;
	action1.sa_sigaction = &sigusr1_handler;
	sigemptyset(&action1.sa_mask);
	sigaddset(&action1.sa_mask, SIGUSR1);
	sigaction(SIGUSR1, &action1, NULL);

	memset(&action2, 0, sizeof(action2));
	action2.sa_flags = SA_SIGINFO;
	action2.sa_sigaction = &sigusr2_handler;
	sigemptyset(&action2.sa_mask);
	sigaddset(&action2.sa_mask, SIGUSR2);
	sigaction(SIGUSR2, &action2, NULL);
}

int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	activate_signal_action();
	while (1)
	{
		if (data[1] == 8)
		{
			ft_printf("%c", data[0]);
			data[0] = 0;
			data[1] = 0;
		}
		pause();
	}
	return (0);
}
