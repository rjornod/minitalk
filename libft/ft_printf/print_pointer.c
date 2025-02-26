/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:25:28 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 15:37:38 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex_digi_ll(unsigned long long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 16;
		count++;
	}
	return (count);
}

int	print_hexlow_ll(unsigned long long n)
{
	unsigned long long	i;
	int					count_digits;
	char				*hex_digi;
	char				*hex_str;
	int					count;

	i = 0;
	hex_digi = "0123456789abcdef";
	count_digits = count_hex_digi_ll(n);
	hex_str = (char *)malloc((count_digits + 1) * sizeof(char));
	if (hex_str == NULL)
		return (-1);
	hex_str[count_digits] = '\0';
	if (n == 0)
		hex_str[i] = '0';
	i = count_digits - 1;
	while (n != 0)
	{
		hex_str[i] = hex_digi[n % 16];
		n = n / 16;
		i--;
	}
	count = ft_putstr_i(hex_str);
	free(hex_str);
	return (count);
}

int	print_pointer(void *pointer)
{
	uintptr_t	address;
	int			count;

	if (pointer == NULL)
	{
		ft_putstr_i("(nil)");
		return (5);
	}
	address = (uintptr_t)pointer;
	ft_putstr_i("0x");
	count = print_hexlow_ll(address) + 2;
	return (count);
}
