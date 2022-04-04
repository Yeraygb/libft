/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:51:17 by ygonzale          #+#    #+#             */
/*   Updated: 2022/03/31 13:24:24 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*aux;

	aux = (char *) s;
	i = 0;
	while (i < n)
	{
		aux[i] = '\0';
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