/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:25:01 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/25 15:01:39 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char	const *s1, char const	*set)
{
	size_t	start;
	size_t	end;
	char	*newstr;
	size_t	trimmedlen;

	start = 0;
	if (s1[0] == '\0')
	{
		newstr = (char *)malloc(1);
		if (newstr == NULL)
			return (NULL);
		newstr[0] = '\0';
		return (newstr);
	}
	end = ft_strlen(s1) - 1;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	trimmedlen = end - start + 1;
	newstr = (char *)malloc((trimmedlen + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	ft_strlcpy(newstr, s1 + start, trimmedlen + 1);
	return (newstr);
}

// int	main()
// {
// 	char const	*str1 = "   HELLO     "; // 3 spaces before, 5 spaces after
// 	char const	*set = " O"; // spaces and O
// 	char	*newstr = ft_strtrim(str1, set);
// 	printf("Trimmed string:\n|%s|\n", newstr);
// }