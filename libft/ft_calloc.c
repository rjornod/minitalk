/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:59:10 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 15:10:13 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (num > (size_t)(-1) / size)
		return (NULL);
	ptr = (char *)malloc(num * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, num * size);
	return (ptr);
}

// int	main()
// {
// 	int	*ptr;
// 	int	i;

// 	ptr = (int *)ft_calloc(5, sizeof(int));
// 	if (ptr == NULL)
// 	{
// 		printf("Memory not allocated.\n");
// 		exit(0);
// 	}
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d\n", ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return (0);
// }