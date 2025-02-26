/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:16:30 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 14:14:25 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int search)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)search)
			last = ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)search == '\0')
		return ((char *)&str[i]);
	return (last);
}

// int main(void) 
// {
//     const char	*str = "Hello, world!";
//     char 		*result;

//     result = ft_strrchr(str, 'o'); 
//     if (result != NULL) {
//         printf("Last occurrence found here: %s\n", result);
//     } else {
//         printf("Character not found\n");
//     }
//     return 0;
// }