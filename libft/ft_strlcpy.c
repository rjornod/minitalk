/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:39:36 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 17:49:31 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

// int main() {
//     char src[] = "Hello world, you are wonderful!";
//     char dst[60];
// 	int size;

// 	size = 4;
//     size_t len_short = ft_strlcpy(dst, src, size);
//     printf("Copied string: %s\n", dst);
//     printf("Length of source string: %zu\n", len_short);

// 	size = 31;
//     size_t len_exact = ft_strlcpy(dst, src, size);
//     printf("Copied string: %s\n", dst);
//     printf("Length of source string: %zu\n", len_exact);

//     return 0;
// }