/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:03:03 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/01 10:27:37 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*auxd;
	unsigned const char	*auxs;
	size_t				i;

	auxd = (unsigned char *) dest;
	auxs = (unsigned const char *) src;
	i = 0;
	while (i < len)
	{
		auxd[i] = auxs[i];
		i++;
	}
	return (0);
}
/*
** no se
*/