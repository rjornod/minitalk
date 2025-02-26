/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 12:12:14 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 15:11:57 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int search)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)search)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)search == '\0')
		return ((char *)&str[i]);
	return (NULL);
}

// int main(void) 
// {
//     const char *str = "hello world";
//     char *result;

//     result = ft_strchr(str, 'm'); 
//     if (result != NULL) {
//         printf("First occurrence: %s\n", result);
//     } else {
//         printf("Character not found\n");
//     }
//     return 0;
// }