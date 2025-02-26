/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:16:17 by rojornod          #+#    #+#             */
/*   Updated: 2025/01/31 14:06:10 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H 
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "../libft.h"

int		ft_printf(const char *string, ...);
int		print_char(char c);
int		print_str(char *s);
int		print_digi(int n);
int		print_unint(unsigned int n);
int		print_hexlow(unsigned int n);
int		print_hexup(unsigned int n);
int		print_percent(char c);
int		print_pointer(void *pointer);
int		ft_putstr_i(char *s);
int		ft_putchar_i(int ch);

#endif