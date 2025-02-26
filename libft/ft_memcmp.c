/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:15:54 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 11:44:28 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*d;
	const unsigned char	*s;

	d = (const unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (d[i] != s[i])
			return ((int)d[i] - (int)s[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char str1[] = "HelloWorld";
//     char str2[] = "HelloWorld";
//     char str3[] = "HelloC";
// 	size_t  size = 10;

//     int result1 = ft_memcmp(str1, str2, size);
//     if (result1 == 0)
//         printf("str1 and str2 are identical.\n");
//     else
//         printf("str1 and str2 are different.\n");

//     int result2 = ft_memcmp(str1, str3, size);
//     if (result2 == 0)
//         printf("str1 and str3 are identical.\n");
//     else
//         printf("str1 and str3 are different.\n");

//     return 0;
// }
