/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:32:40 by rojornod          #+#    #+#             */
/*   Updated: 2025/02/28 15:23:07 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include "../libft/ft_printf/ft_printf.h"
#include "../libft/libft.h"

typedef struct s_info
{
	int	client_pid;
}	t_info;