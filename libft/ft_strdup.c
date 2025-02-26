/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:26:16 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/16 15:03:56 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	len;

	len = ft_strlen(str);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_strlcpy(dup, str, len + 1);
	return (dup);
}

// int main() {
//     const char *original = "Hello, World!";
//     char *copy = ft_strdup(original);

//     if (copy == NULL) {
//         printf("Allocation failed\n");
//         return 1;
//     }
//     printf("Original: %s\n", original);
//     printf("Copy: %s\n", copy);

//     free(copy);
//     return (0);
// }