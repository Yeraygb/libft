/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 12:39:01 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/05 17:10:53 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Funcion para buscar caracter que se repite desde el principio de la string
*/
static size_t	ft_start(char const *s1, char const *set)
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

	len_s1 = ft_strlen(s1);
	while (s1[len_s1])
	{
		if (ft_strchr(set, s1[len_s1]) == 0)
			break ;
		len_s1--;
	}
	return (len_s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	size_t	i;
	size_t	n;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	i = 0;
	str = malloc(sizeof(char *) * (start - end + 1));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		n = 0;
		if (s1[i] == set[n])
		{
			str[i] = s1[i];
			n++;
		}
		i++;
	}
	return (str);
}

/* int	main(void)
{
	char	str[] = "holamundo";
	char	a[] = "ho";

	printf("%s", ft_strtrim(str, a));
}
 */