/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:19:03 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 15:49:21 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && (i < n))
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return ((int)(unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	int result1 = ft_strncmp(str1, str2, 5);
// 	printf("Test 1: %d - The strings are the exact same\n", result1);

// 	char str3[] = "Hello";
// 	char str4[] = "Hella";
// 	int result2 = ft_strncmp(str3, str4, 5);
// 	printf("Test 2: %d - The strings are different\n", result2);
// }