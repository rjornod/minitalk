/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:28:09 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/17 16:11:28 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// int	main()
// {
// 	int	c;
// 	c = 128;
// 	int result = ft_isascii(c);
// 	if (result == 0)
// 		printf("%d - Character is not a valid ASCII character\n", result);
// 	else 
// 		printf("%d - Character is a valid ASCII character\n", result);
// }