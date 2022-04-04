/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 10:27:45 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/04 10:32:53 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** function search the first chararacter in the string and return a pointer
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(s);
	if (n == '\0')
		return ((char *)&s[0]);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}

/* int	main(void)
{
	char	s1[] = "bonjour";
	char	d = '\0';

	printf("%s", ft_strchr(s1, d));
	printf("%s", strchr(s1, d));
} */
