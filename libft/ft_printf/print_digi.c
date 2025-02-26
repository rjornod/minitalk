/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 09:57:53 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 14:11:18 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_digi(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count ++;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

int	print_digi(int n)
{
	int	count;

	count = count_digi(n);
	ft_putnbr_fd(n, 1);
	return (count);
}

// int main()
// {	
// 	int	count;
// 	count = count_digi(-6454656);
// 	printf("%d", count);
// }