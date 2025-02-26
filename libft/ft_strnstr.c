/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:18:54 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 14:55:46 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (search[i] == '\0')
		return ((char *)str);
	if (size == 0)
		return (NULL);
	while (str[i] != '\0' && i < size)
	{
		j = 0;
		while ((str[i + j] == search[j]) && (i + j < size))
		{
			j++;
			if (search[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (NULL);
}
// int	main(void)
// {
// 	const char *str = "What a wonderful world";
// 	const char *search = "ful";
// 	char *result;

// 	result = ft_strnstr(str, search, 23);
// 	printf("-%s-\n", str);
//  	if (result != NULL)
//         printf("*%s* found -> %s\n", search, result);
//     else
//         printf("*%s* not found\n", search);
// }
