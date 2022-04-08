/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:35:35 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/08 11:45:18 by ygonzale         ###   ########.fr       */
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
	while (i < n)
	{
		if (aux[i] == (unsigned char) c)
			return ((void *)&aux[i]);
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	int	a[7] = {0, 1, 2 ,3 ,4 ,5};
	//char	b = 'a';
//	printf("%s\n", (char *)ft_memchr(a, 0, 0));
//	printf("%s\n", (char *)memchr(a, 0, 0));
//	printf("%s\n", (char *)ft_memchr(a, 0, 1));
//	printf("%s\n", (char *)memchr(a, 0, 1));
//	printf("%s\n", (char *)ft_memchr(a, 2, 3));
//	printf("%s\n", (char *)memchr(a, 2, 3));
//	printf("%s\n", (char *)ft_memchr(a, 2 + 256, 3));
//	printf("%s\n", (char *)memchr(a, 2 + 256, 3));
	printf("%s\n", (char *)ft_memchr("bonjourno", 'n', 2));
	printf("%s\n", (char *)memchr("bonjourno", 'n', 2));
}
 */