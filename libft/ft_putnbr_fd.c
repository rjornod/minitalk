/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojornod <rojornod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 09:55:20 by rojornod          #+#    #+#             */
/*   Updated: 2024/10/23 12:46:04 by rojornod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

// int main()
// {
//     int num = 123456;
//     ft_putnbr_fd(num, 1);
// 	printf("\n");
// 	int num2 = -22356754;
//     ft_putnbr_fd(num2, 1);
// 	printf("\n");
// 	int num3 = 0;
//     ft_putnbr_fd(num3, 1);
// 	printf("\n");
// 	int num4 = -2147483648;
//     ft_putnbr_fd(num4, 1);
// 		printf("\n");
// 	int num5 = 2147483647;
//     ft_putnbr_fd(num5, 1);
//     return 0;
// }
