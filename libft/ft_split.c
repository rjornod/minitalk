/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:23:04 by rojornod          #+#    #+#             */
/*   Updated: 2025/02/04 17:12:59 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	words(char const *s, char c)
{
	size_t	count;
	size_t	in_word;
	size_t	i;

	i = 0;
	in_word = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (s[i] == c)
		{
			in_word = 0;
		}
		i++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, size_t *index)
{
	size_t	start;
	size_t	len;

	while (s[*index] == c && s[*index] != '\0')
		(*index)++;
	start = *index;
	len = 0;
	while (s[*index] != c && s[*index] != '\0')
	{
		len++;
		(*index)++;
	}
	return (ft_substr(s, start, len));
}

static void	free_split(char **newstr, size_t i)
{
	while (i > 0)
		free(newstr[--i]);
	free(newstr);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**newstr;
	size_t	index;

	word_count = words(s, c);
	newstr = (char **)malloc((word_count + 1) * sizeof(char *));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	index = 0;
	while (i < word_count)
	{
		newstr[i] = get_next_word(s, c, &index);
		if (newstr[i] == NULL)
		{
			free_split(newstr, i);
			return (NULL);
		}
		i++;
	}
	newstr[i] = NULL;
	return (newstr);
}

// int	main()
// {
// 	char const	*str = "Hello, world!";
// 	char		**result;
// 	size_t		i;

// 	result = ft_split(str, ' ');
// 	i = 0;
// 	while (result[i] != NULL)
// 	{
// 		printf("Word %lu: %s\n", i, result[i]);
// 		i++;
// 	}
// 	return (0);
// }
