/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:46:33 by ygonzale          #+#    #+#             */
/*   Updated: 2022/03/31 13:47:01 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*aux1;
	unsigned const char	*aux2;

	i = 0;
	aux1 = (unsigned const char *) s1;
	aux2 = (unsigned const char *) s2;
	while ((aux1[i] || aux2[i]) && i < n)
	{
		if (aux1[i] > aux2[i])
			return (1);
		if (aux1[i] < aux2[i])
			return (-1);
		i++;
	}
	return (0);
}

/* 
int	main(void)
{
	char	a[] = "test\200";
	char	b[] = "test\0";

	printf("%d\n", ft_memcmp(a, b, 6));
	printf("%d", memcmp(a, b, 6));
}
*/