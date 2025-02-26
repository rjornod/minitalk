/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 10:39:00 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/25 12:37:48 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_num_len(int n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	len = get_num_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		num = -n;
	else
		num = n;
	while (len--)
	{
		str[len] = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int main() 
// {
//     int num1 = -5357537;
//     char *result1 = ft_itoa(num1);
//     if (result1) {
//         printf("The string of %d is: %s\n", num1, result1);
// 		free(result1);
//     } else {
//         printf("Memory allocation failed\n");
//     }

//     int num2 = 5357537;
//     char *result2 = ft_itoa(num2);
//     if (result2) {
//         printf("The string of %d is: %s\n", num2, result2);
// 		free(result2);
//     } else {
//         printf("Memory allocation failed\n");
//     }

//     int num3 = 0;
//     char *result3 = ft_itoa(num3);
//     if (result3) {
//         printf("The string of %d is: %s\n", num3, result3);
// 		free(result3);
//     } else {
//         printf("Memory allocation failed\n");
//     }
// }