/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:24:01 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 12:28:08 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (str);
}

// int main() {
//     char str[] = "Hello, World!";
//     printf("Before memset: %s\n", str);
//     ft_memset(str, '*', 5);
//     printf("After memset: %s\n", str);
//     return 0;
// }