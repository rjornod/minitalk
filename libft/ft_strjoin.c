/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:20:10 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/28 15:12:17 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*newstr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = (char *)malloc((len1 + len2) + 1);
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1, len1 + 1);
	ft_strlcat(newstr, s2, len1 + len2 + 1);
	return (newstr);
}

// int	main()
// {
// 	char const	*s1 = "Hello ";
// 	char const	*s2 = "World";
// 	char	*result;
// 	printf("String 1: %s\n", s1);
// 	printf("String 2: %s\n", s2);
// 	result = ft_strjoin(s1, s2);
// 	printf("New string after joining: %s\n", result);
// }