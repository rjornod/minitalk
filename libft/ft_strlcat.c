/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:29:16 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 17:50:02 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dest_length;
	size_t	i;
	size_t	h;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dest);
	h = dest_length;
	i = 0;
	if (size <= dest_length)
		return (size + src_length);
	while (src[i] != '\0' && (h < size -1))
	{
		dest[h] = src[i];
		h++;
		i++;
	}
	dest[h] = '\0';
	return (dest_length + src_length);
}

// int main(void)   
// {
//     char dest1[20] = "Hello";
//     char src1[] = "World";
//     size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
//     printf("Test 1: %s, Length: %zu\n", dest1, result1);

// 	char dest2[10] = "Hello";
//     char src2[] = "World";
//     size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
//     printf("Test 2: %s, Length: %zu\n", dest2, result2);

//     char dest3[10] = "";
//     char src3[] = "World";
//     size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
//     printf("Test 3: %s, Length: %zu\n", dest3, result3); 

//     char dest4[10] = "Hello";
//     char src4[] = "";
//     size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
//     printf("Test 4: %s, Length: %zu\n", dest4, result4);
// }