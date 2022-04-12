/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 12:06:40 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/12 10:25:16 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h> 
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = (void *)malloc(count * size);
	if (!c)
		return (NULL);
	ft_bzero(c, count * size);
	return (c);
}

/* #include <string.h>


int main(void)
{
	printf("%d", ft_calloc(SIZE_MAX, SIZE_MAX));
  // calloc(SIZE_MAX, SIZE_MAX);
	write(1, "\n", 1);
	return (0);
} */