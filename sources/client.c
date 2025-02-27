/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:33:05 by rojornod          #+#    #+#             */
/*   Updated: 2025/02/27 17:00:22 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minitalk.h"

static void	send_signal(char *message, int pid)
{
	int	i;
	int	bit;
	int byte_index;

	i = 0;
	while (message[i] != '\0')
	{
		bit = 0;
		while (bit < 8)
		{
			
			byte_index = message[i] >> (7-bit) & 1;
			//ft_printf("%d", byte_index);
			if (byte_index == 1)
				kill(pid, SIGUSR1);
			if (byte_index == 0)
				kill(pid, SIGUSR2);
			bit++;
			usleep(100);
		}
		i++;
	}
}

int main(int argc, char **argv)
{
	int pid;

	if (argc != 3)
		return (ft_printf("Error, try again\n"), EXIT_FAILURE);
	pid = ft_atoi(argv[1]);
	send_signal(argv[2], pid);
	return (0);
}
