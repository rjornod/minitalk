/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:28:38 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 13:44:05 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_hex_digi(unsigned int n)
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

int	print_hexlow(unsigned int n)
{
	unsigned int	i;
	int				count_digits;
	char			*hex_digi;
	char			*hex_str;
	int				count;

	i = 0;
	hex_digi = "0123456789abcdef";
	count_digits = count_hex_digi(n);
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

// int main()
// {
// 	uintptr_t n = 140736672801712;
// 	int result = print_hexlow(n);
// 	printf("\nNumber of characters: %d\n", result);
// 	return (0);
// }
