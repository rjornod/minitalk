/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:13:57 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 11:41:28 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t				i;
	const unsigned char	*p;

	p = (const unsigned char *)ptr;
	i = 0;
	while (i < count)
	{
		if (p[i] == (unsigned char)ch)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char str[] = "Hey world, you are wonderful!";
// 	char *result;
// 	result = (char *)ft_memchr(str, 'y', 3);
// 	printf("after copy: %s\n", result);

// 	char str2[] = "Hey world, you are wonderful!";
// 	char *result2;
// 	result2 = (char *)ft_memchr(str2, 'u', sizeof(str2));
// 	printf("after copy: %s\n", result2);

// 	char str3[] = "Hey world, you are wonderful!";
// 	char *result3;
// 	result3 = (char *)ft_memchr(str3, '0', sizeof(str3));
// 	printf("after copy: %s\n", result3);
// }
