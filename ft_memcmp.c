/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:46:33 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/07 16:55:19 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*aux1;
	unsigned char		*aux2;

	i = 0;
	aux1 = (unsigned char *) s1;
	aux2 = (unsigned char *) s2;
	while (i < n)
	{
		if (aux1[i] > aux2[i])
			return (1);
		if (aux1[i] < aux2[i])
			return (-1);
		i++;
	}
	return (0);
}

/* int	main(void)
{
	char	a[] = {0, 0, 127, 0};
	char	b[] = {0, 0, 42, 0};

	printf("%d\n", ft_memcmp(a, b, 4));
	printf("%d", memcmp(a, b, 4));
}
 */