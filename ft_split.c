/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:45:11 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/12 09:16:26 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_s(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c)
			count++;
		while (s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_subsplit(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	str = malloc(sizeof(char *) * (len - start + 1));
	if (!str)
		return (NULL);
	while (start < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_body(char **dest, char const *src, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (src[i])
	{
		while (src[i] != c && src[i])
		{
			i++;
			if (src[i] == c)
			{
				dest[j] = ft_subsplit[src, count, i];
				j++;
			}
		}
		while (src[i] == c)
		{
			i++;
			count = i;
		}
	}
	dest[j] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * ft_count_s(s, c) + 1);
	if (!str)
		return (NULL);
	ft_body(str, s, c);
	return (str);
}

/* int	main(void)
{
	char	s[] = "esto es una frase de prueba";
	char	c = ' ';

	printf("%s", ft_split(s, c));
} */
