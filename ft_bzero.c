/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:51:17 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/07 17:09:32 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
	}
}

/* 
int	main(void)
{
	char	c[] = "hola";

	ft_bzero(c, 1);
	printf("%s", c);
	bzero(c, 1);
	printf("%s", c);
}
*/