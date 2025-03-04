/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:58:40 by rojornod          #+#    #+#             */
/*   Updated: 2025/03/04 10:37:08 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

volatile sig_atomic_t	g_data[2] = {0, 0};

/*
	This function handles the signals recieved. 
	We reconstruct the characters in binary based on the signal recieved.
	The character being reconstructed is stored in g_data[0]
*/
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
	kill(info->si_pid, SIGUSR1);
}

/*
	This function dictates what to do when it recieves each signal.
	We use the flad SA_SIGINFO to store the pid of the clients sending
	us the signals.
	For both SIGUSR1 and SIGUSR2 the function signal_handler will be called.
*/
void	activate_signal_action(void)
{
	struct sigaction	action;

	action.sa_flags = SA_SIGINFO;
	action.sa_sigaction = &signal_handler;
	sigaction(SIGUSR1, &action, NULL);
	sigaction(SIGUSR2, &action, NULL);
}

/*
	The main simply prints the server PID then remains in a loop state until
	its closed down so we can keep sending messages.
*/
int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	activate_signal_action();
	while (1)
		pause();
	return (0);
}
