/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 10:40:09 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/06 12:06:21 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** La funcion guarda suficiente memoria para copiar una string
** entonces la copia y te de vuelve la new string
**
** @param {const char *s} es la string que quieres copiar
**
** @return {char} La nueva string despues de copiar
*/
char	*ft_strdup(const char *s1)
{
	int		i;
	int		count;
	char	*s2;

	count = 0;
	while (s1[count])
		count++;
	s2 = malloc(sizeof(char) * (count + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* int	main(void)
{
	char	a[] = "lorem ipsum dolor sit amet";

	printf("%s\n", ft_strdup(a));
	printf("%s", strdup(a));
	return (0);
} */
