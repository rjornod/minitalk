/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:01:18 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/17 16:11:25 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// int	main()
// {
// 	int	c;
// 	c = 123;
// 	int result = ft_isalpha(c);
// 	if (result == 0)
// 		printf("%d - Character is not a letter\n", result);
// 	else 
// 		printf("%d - Character is a letter", result);
// }