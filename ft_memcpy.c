/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:37:16 by ygonzale          #+#    #+#             */
/*   Updated: 2022/03/31 13:47:06 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void	*src, size_t n)
{
	unsigned char		*auxd;
	unsigned const char	*auxs;
	size_t				i;

	auxd = (unsigned char *) dest;
	auxs = (unsigned const char *) src;
	i = 0;
	while (i < n)
	{
		auxd[i] = auxs[i];
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char	c[] = "hola";
	char	d[] = "mundo";

	printf("%s", ft_memcpy(c, d, 2));
	printf("%s", memcpy(c, d, 2));
}
*/