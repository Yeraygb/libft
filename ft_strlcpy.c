/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 09:39:38 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/06 09:29:16 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Funcion copia en el dest, la string src
**
** @param {char *dest} La string en la que queremos copiar
** @param {const char *src} La string que queremos copiar
** @param {size_t size} La cantidad de parametros quer queremos copiar
**
** @return {size_t} El numero de caracteres despues de la copia
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size > 0)
	{
		while (src[count] && count < (size - 1))
		{
			dest[count] = src[count];
			count++;
		}
		dest[count] = '\0';
	}
	count = 0;
	while (src[count] != '\0')
		count++;
	return (count);
}

/* int	main(void)
{
	char	c[] = "lorem ipsum dolor sit amet";
	char	d[] = "lorem ipsum";

	printf("%zu\n", ft_strlcpy(c, d, 3));
	printf("%zu", strlcpy(c, d, 3));
}
 */