/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:41:49 by rojornod          #+#    #+#             */
/*   Updated: 2025/02/06 15:36:01 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*subs;

	if (start >= ft_strlen(s) || len == 0 || s[0] == '\0')
	{
		subs = (char *)malloc(1);
		if (subs == NULL)
			return (NULL);
		subs[0] = '\0';
		return (subs);
	}
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

// int	main()
// {
// 	char const	*string = "Hello, world!";
// 	char		*substring = ft_substr(string, 0, 4);
// 	printf("Original string: %s\n", string);
// 	printf("Substring: %s\n", substring);
// }
