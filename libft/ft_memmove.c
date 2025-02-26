/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:10:55 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 12:17:02 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}

// int	main()
// {
// 	char dest[] = "123456789";
//     char src[] = "987654321";
// 	char *result;
// 	size_t n = 3;
// 	printf("1 - Before copy: %s\n", dest);
// 	result = ft_memmove(dest, src, n);
// 	printf("1 - After copy: %s\n\n", result);

// 	char dest2[] = "TEST";
//     char src2[] = "";
// 	char *result2;
// 	size_t n2 = 3;
// 	printf("2 - Before copy: %s\n", dest2);
// 	result2 = ft_memmove(dest2, src2, n2);
// 	printf("2 - After copy: %s\n\n", result2);

//     // Test 5: Copy zero bytes
//     char dest3[] = "123456789";
//     char src3[] = "987654321";
//     size_t n3 = 0;
//     printf("3 - Before copy zero bytes: %s\n", dest3);
//     ft_memmove(dest3, src3, n3);
//     printf("3 - After copy zero bytes: %s\n\n", dest3);
//     return 0;
// }
