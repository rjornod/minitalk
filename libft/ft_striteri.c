/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:16:16 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 10:21:13 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_function(unsigned int i, char *c)
// {
// 	if (i % 2 == 0 && *c == 'e')
// 		*c = 'E';
// }

// int main(void)
// {
// 	char str[] = "Hello";
// 	ft_striteri(str, ft_function);
// 	printf("%s\n", str);
// 	return (0);
// }