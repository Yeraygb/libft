/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:35:35 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/07 10:56:03 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** search a first byte in a string and return a pointer
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *)s;
	i = 0;
	while (aux[i] && i < n)
	{
		if (aux[i] == (unsigned char)c)
			return (&aux[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	int	a[7] = {0, 1, 2 ,3 ,4 ,5};
	//char	b = 'a';
	printf("%s", (char *)ft_memchr(a, 2, 3));
}
 */