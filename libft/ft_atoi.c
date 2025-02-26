/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:51:11 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/25 15:55:54 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

// int	main()
// {
// 	const char *str1 = " +000123";
// 	int result1;

// 	result1 = ft_atoi(str1);
// 	printf("The converted string is %d\n", result1);
// //##########################################################
// 	const char *str2 = " -000123";
// 	int result2;

// 	result2 = ft_atoi(str2);
// 	printf("The converted string is %d\n", result2);
// //##########################################################
// 	const char *str3 = " +-000123";
// 	int result3;

// 	result3 = ft_atoi(str3);
// 	printf("The converted string is %d\n", result3);
// //##########################################################
// 	const char *str4 = " 000123";
// 	int result4;

// 	result4 = ft_atoi(str4);
// 	printf("The converted string is %d\n", result4);
// //##########################################################
// 	const char *str5 = " fail000123";
// 	int result5;

// 	result5 = ft_atoi(str5);
// 	printf("The converted string is %d\n", result5);
// }