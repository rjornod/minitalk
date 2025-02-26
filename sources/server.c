/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:58:40 by rojornod          #+#    #+#             */
/*   Updated: 2025/02/26 16:48:09 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

volatile sig_atomic_t recieved = 0;

void	sigusr1_handler(int signal)
{
	if (signal == SIGUSR1)
	{
		ft_printf("Recieved SIGUSR1\n");
		recieved++;
		if (recieved == 8)
		{
			recieved = 0;
			ft_printf("character found\n\n");
		}
	}
}

void	sigusr2_handler(int signal)
{
	if (signal == SIGUSR2)
	{
		ft_printf("Recieved SIGUSR2\n");
		recieved++;
		if (recieved == 8)
		{
			recieved = 0;
			ft_printf("character found\n\n");
		}
	}
}

void	activate_signal_action(void)
{
	struct sigaction action;

	action.sa_handler = &sigusr1_handler;
	sigaction(SIGUSR1, &action, NULL);
	action.sa_handler = &sigusr2_handler;
	sigaction(SIGUSR2, &action, NULL);
}


int	main(void)
{
	ft_printf("Server PID: %d\n", getpid());
	activate_signal_action();
	
	while (1)
		continue ;
	return (0);
}
