/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:45:11 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/13 14:50:37 by ygonzale         ###   ########.fr       */
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
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_body(char **dest, char const *src, char c)
{
	size_t			i;
	size_t			j;
	unsigned int	count;

	i = 0;
	j = 0;
	count = 0;
	while (src[i])
	{
		while (src[i] != c && src[i])
		{
			i++;
			if (src[i] == c || i == ft_strlen(src))
				dest[j++] = ft_substr(src, count, i - count);
		}
		while (src[i] == c && src[i])
		{
			i++;
			count = i;
		}
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * ft_count_s(s, c) + 1);
	if (!str)
		return (NULL);
	ft_body(str, s, c);
	return (str);
}
