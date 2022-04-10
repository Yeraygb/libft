/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 13:45:11 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/08 17:34:08 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_s(char const *s, char c)
{
	size_t	i;
	size_t	count;

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

char	**ft_body(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	s_len;

	s_len = count_s(s, c);
	str = (char *)malloc(sizeof(*s) * s_len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		if (s[i] == c)
			str = ft_substr(s, count_s(s[i], c), strlen(s));
		i++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	if (!s)
		return (NULL);
	return (ft_body (s, c));
}
