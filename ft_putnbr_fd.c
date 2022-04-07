/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:13:34 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/07 16:22:10 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (0 > i)
	{
		write(fd, "-", 1);
		i = -i;
	}
	if (i > 10)
	{
		ft_putnbr_fd(i / 10, fd);
	}
	ft_putchar_fd((i % 10) + '0', fd);
}
