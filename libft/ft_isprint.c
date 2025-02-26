/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:48:49 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/17 16:11:39 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main()
// {
// 	int	c;
// 	c = 126;
// 	int result = ft_isprint(c);
// 	if (result == 0)
// 		printf("%d - Character is not a printable character\n", result);
// 	else 
// 		printf("%d - Character is a printable character\n", result);
// }