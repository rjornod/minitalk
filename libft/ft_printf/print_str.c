/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:32:23 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 14:13:28 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_i(char *s)
{
	int	result;
	int	count;

	if (!s)
		s = "(null)";
	count = strlen(s);
	result = write(1, s, count);
	if (result == -1)
		return (-1);
	return (count);
}

int	print_str(char *string)
{
	int	count;

	if (string == NULL)
		string = "(null)";
	count = ft_putstr_i(string);
	if (count == -1)
		return (-1);
	return (count);
}
