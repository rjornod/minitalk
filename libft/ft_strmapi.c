/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:44:51 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 10:12:05 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	newstr = (char *)malloc((len +1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (i < len)
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// char ft_function(unsigned int i, char c)
// {
// 	return (c + i);
// }
// int main(void)
// {

// 	char *str = "Hello";
// 	char *newstr = ft_strmapi(str, ft_function);
// 	printf("%s\n", newstr);
// 	free(newstr); 
// 	return (0);
// }

//ft_function will return the char c + the index i 
//ex: c = 'H' i = 0, return 'H' + 0 = 'H'
//The return for this int main should be: "Hfnos"
