/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 09:14:22 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/07 12:24:13 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La funcion reserva memoria para crear una suybstring empezando por start
** y tiene una longitud max
**
** @param {char const *s} La string que quieres copiar
** @param {unsigned int start} El indice start por el que quieres que empieze a
** copiar
** @param {size_t len} El tamaño que quieres copiar
**
** @return {char} La nueva substring
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

/* int	main(void)
{
	char	s1[] = "lorem ipsum dolor sit amet";

	printf("%s", ft_substr(s1, 7, 10));<
} */
