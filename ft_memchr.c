/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:35:35 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/01 13:32:22 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** search a first byte in a string and return a pointer
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	char			*aux;

	aux = (char *)s;
	i = 0;
	while (aux[i] && i < n)
	{
		if (aux[i] == c)
			return (&aux[i]);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	int	a[7] = {-49, 49, 1, -1, 0, -2, 2};
	//char	b = 'a';
	printf("%s", (char *)ft_memchr(a, -1, 7));
}
*/