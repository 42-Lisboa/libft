/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcosta-a <jcosta-a@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:36:32 by jcosta-a          #+#    #+#             */
/*   Updated: 2026/04/28 13:10:45 by jcosta-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	write(fd, &"0123456789"[nbr % 10], 1);
}
/* 
int main(void)
{
	ft_putnbr_fd(-123, 1);
	printf("\n");
	ft_putnbr_fd(2026, 2);
	printf("\n");
} */
