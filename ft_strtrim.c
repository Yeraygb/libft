/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:39:01 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/06 16:25:35 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Funcion para buscar caracter que se repite desde el principio de la string
** Recorre la string hasta que la coincidencia sea nulo y devuelve las veces que 
** ha sumado
*/
static size_t	ft_start(char const *set, char const *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(set, s1[i]) == 0)
			break ;
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
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	size_t	i;

	start = ft_start(s1, set);
	end = ft_strlen(s1) - ft_end(s1, set);
	if (start >= end)
		return (ft_strdup(""));
	str = malloc(sizeof(char *) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* 	ft_strlcpy(str, s1 + start, (end - start + 1)); */
/* 	ft_substr(s1, start, (end - start)); */

/* int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	a[] = "te";

	printf("%s", ft_strtrim(str, a));
}
 */