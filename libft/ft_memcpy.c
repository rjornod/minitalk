/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:51:24 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 11:47:33 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest_str;
	s = (const unsigned char *)src_str;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest_str);
}

// int	main()
// {
// 	char dest[] = "";
//     char src[] = "";
// 	char *result;
// 	size_t n = 3;
// 	printf("Before copy: %s\n", dest);
// 	result = ft_memcpy(dest, src, n);
// 	printf("after copy: %s\n", result);
// }