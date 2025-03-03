/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:33:05 by rojornod          #+#    #+#             */
/*   Updated: 2025/03/03 14:09:13 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"
#include <signal.h>

volatile sig_atomic_t	g_recieved = 0;

void	signal_reciever(int signal)
{
	if (signal == SIGUSR1)
		g_recieved = 1;
}

int	mod_atoi(const char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (-1);
		else
			result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}

static void	send_signal(char *message, int pid)
{
	int					i;
	int					bit;
	struct sigaction	action;

	action.sa_handler = signal_reciever;
	action.sa_flags = 0;
	sigemptyset(&action.sa_mask);
	sigaction(SIGUSR1, &action, NULL);
	i = 0;
	while (message[i] != '\0')
	{
		bit = 0;
		while (bit < 8)
		{
			if ((message[i] >> (7 - bit)) & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			while (g_recieved == 0)
				usleep(200);
			bit++;
			g_recieved = 0;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
		return (ft_printf("Error, try again\n"), EXIT_FAILURE);
	pid = mod_atoi(argv[1]);
	if (pid == -1)
	{
		ft_printf("Invalid process ID\n");
		return (-1);
	}
	send_signal(argv[2], pid);
	return (0);
}
