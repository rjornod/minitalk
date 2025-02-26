/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:14:20 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 12:20:55 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar_i(int ch)
{
	if (write(1, &ch, 1) == -1)
		return (-1);
	else
		return (1);
}

int	print_char(char c)
{
	int	count;

	count = 0;
	count = ft_putchar_i(c);
	if (count == -1)
		return (-1);
	return (count);
}
