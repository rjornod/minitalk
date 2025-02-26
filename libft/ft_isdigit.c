/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:55:22 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/17 16:11:31 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// int	main()
// {
// 	int	c;
// 	c = 57;
// 	int result = ft_isdigit(c);
// 	if (result == 0)
// 		printf("%d - Character is not a number\n", result);
// 	else 
// 		printf("%d - Character is a number\n", result);
// }