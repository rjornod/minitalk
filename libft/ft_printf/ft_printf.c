/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 10:43:24 by rojornod          #+#    #+#             */
/*   Updated: 2024/11/15 13:16:20 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//function for what to do after finding a % in the string

static int	print_format(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == '\0')
		return (-1);
	if (specifier == 'c')
		count += print_char(va_arg(args, int));
	else if (specifier == 's')
		count += print_str(va_arg(args, char *));
	else if ((specifier == 'd') || (specifier == 'i'))
		count += print_digi(va_arg(args, int));
	else if (specifier == 'p')
		count += print_pointer(va_arg(args, void *));
	else if (specifier == 'u')
		count += print_unint(va_arg(args, unsigned int));
	else if (specifier == 'x')
		count = print_hexlow(va_arg(args, unsigned int));
	else if (specifier == 'X')
		count += print_hexup(va_arg(args, unsigned int));
	else if (specifier == '%')
		count += print_percent('%');
	else
		return (-1);
	return (count);
}

static int	process_string(const char *string, va_list args)
{
	int	i;
	int	count;
	int	format_result;

	i = 0;
	count = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			if (string[i + 1] == '\0')
				return (-1);
			format_result = print_format(string[i + 1], args);
			if (format_result < 0)
				return (-1);
			count += format_result;
			i++;
		}
		else
		{
			count += ft_putchar_i(string[i]);
		}
		i++;
	}
	return (count);
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		count;

	if (string == NULL)
		return (-1);
	va_start(args, string);
	count = process_string(string, args);
	if (count == -1)
		return (-1);
	va_end(args);
	return (count);
}
