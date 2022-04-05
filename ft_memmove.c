/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:03:03 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/04 16:28:26 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*auxd;
	unsigned const char	*auxs;
	size_t				i;

	auxd = (unsigned char *) dest;
	auxs = (unsigned const char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (auxd < auxs)
		ft_memcpy(dest, src, len);
	else if (auxd > auxs)
		while (len--)
			auxd[len] = auxs[len];
	return (dest);
}
