/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:53:23 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/15 15:53:20 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c )
{
	size_t	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	const char	*str = "hello world";
// 	int			result;

// 	result = ft_strlen(str);
// 	printf("-%s-\n", str);
// 	printf("The length of the string is: %d\n", result);
// }