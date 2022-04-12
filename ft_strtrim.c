/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:39:01 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/08 16:31:59 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Funcion para buscar caracter que se repite desde el principio de la string
** Recorre la string hasta que la coincidencia sea nulo y devuelve las veces que 
** ha sumado
*/
static size_t	ft_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == 0)
			return (i);
		i++;
	}
	return (i);
}

/*
** Funcion para buscar caracter que se repite desde el final de la string
*/
static size_t	ft_end(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	i;

	i = 0;
	len_s1 = ft_strlen(s1);
	while (i < len_s1)
	{
		if (ft_strchr(set, s1[len_s1 - i - 1]) == 0)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	start = ft_start(s1, set);
	end = ft_strlen(s1) - ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = ft_substr(s1, start, (end - start));
	return (str);
}

/* int	main(void)
{
	char	str[] = "lorem \n ipsum \t dolor \n sit \t amet";
	char	a[] = " ";

	printf("%s", ft_strtrim(str, a));
}
 */