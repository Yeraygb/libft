/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 15:02:36 by ygonzale          #+#    #+#             */
/*   Updated: 2022/03/31 13:47:13 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** function copies the char c to the first n characters  of the string pointed to
*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	aux = (unsigned char *) b;
	i = 0;
	while (i < len)
	{
		aux[i] = c;
		i++;
	}
	return (b);
}

/* int	main(void)
{
	char	c[] = "hola mundo";
	int	t = '6';
	int	n = 3;

	printf("%s", ft_memset(c, t, n));
}
*/