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
		while (s[i] != c && s[i])
			i++;
		if (s[i] == c)
			count++;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;

	*str = (char *)malloc(sizeof(*s) * (s - (count_s(s, c)) + 1));
	i = 0;
	ft_substr(s, s[0], count_s(s, c));
	while (s[i])
	{
		if (s[1] == c)
			ft_substr(s, count_s(s, c), strlen(s));
		i++;
	}
}

+++afa+aad++adaf+++afaf