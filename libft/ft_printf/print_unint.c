/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:51:27 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 12:12:10 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_uint(unsigned int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static void	ft_unsigned_putnbr(unsigned int n, int fd)
{
	char	c;

	if (n > 9)
		ft_unsigned_putnbr(n / 10, fd);
	c = (n % 10) + '0';
	ft_putchar_i(c);
}

int	print_unint( unsigned int n)
{
	unsigned int	count;

	count = count_uint(n);
	ft_unsigned_putnbr(n, 1);
	return (count);
}
