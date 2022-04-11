/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:45:11 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/11 12:57:12 by ygonzale         ###   ########.fr       */
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

	str = malloc(sizeof(char *) * (start - len + 1));
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
		if (src[i] != c)
		{
			dest[j] = ft_subsplit[src, count, i];
			i++;
			j++;
		}
		if (src[i] == c)
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
	str = malloc(sizeof(char *) * ft_count_s(s, c));
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

/* char	**ft_body(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	n;
	size_t	count;
	size_t	s_len;

	i = -1;
	n = 0;
	count = -1;
	s_len = count_s(s, c);
	printf("%zu", s_len);
	str = (char **)malloc(sizeof(char *) * s_len + 1);
	if (!str)
		return (NULL);
	while (i < ft_strlen(s))
	{
		if (s[i] != c && count < 0)
			count = i;
		else if (s[i] == c && count >= 0)
		{
			*str = ft_substr(s, count, i - count);
			count = -1;
			n++;
		}
		i++;
	}
	str[i] = NULL;
	return (str);
}
*/
