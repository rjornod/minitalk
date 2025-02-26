/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:45:14 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/25 12:33:00 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

// int main() {
//     char str[] = "Hello, World!";
//     printf("Before bzero: %s\n", str);
//     ft_bzero(str, 5);
//     printf("After bzero: %s\n", str);
//     return 0;
// }
