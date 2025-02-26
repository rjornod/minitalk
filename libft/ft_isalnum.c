/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:03:03 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/17 16:11:22 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 48 && c <= 57)
		|| (c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// int	main()
// {
// 	int	c;
// 	c = 122;
// 	int result = ft_isalnum(c);
// 	if (result == 0)
// 		printf("%d - Character is not alphanumeric\n", result);
// 	else 
// 		printf("%d - Character is alphanumeric\n", result);
// }