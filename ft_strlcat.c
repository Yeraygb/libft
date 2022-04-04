/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:00:54 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/01 15:45:46 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function return the length of dst + the length of src
*/
size_t	ft_strlcat(char *dest, char *src, size_t	size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	while (dest[count])
		count++;
	if (src)
	{
		while (src[i] && i < (size - 1))
		{
			dest[count] = src[i];
			i++;
			count++;
		}
	}
	dest [i] = '\0';
	return (count);
}

/* int	main(void)
{
	char	c[] = "hola";
	char	d[] = "mundo";

	printf("%zu\n", ft_strlcat(c, d, 1));
	printf("%zu", strlcat(c, d, 1));
}
*/