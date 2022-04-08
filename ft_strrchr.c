/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 11:48:53 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/08 11:04:44 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** search the last character in the string and return a pointer
*/
size_t	ft_strlen(const char *str);

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/* int	main(void)
{
	const char	s1[] = "hola muonde";,0
	char	d = 'o';

	printf("%s", ft_strrchr(s1, d));
	//printf("%s", strrchr(s1, d));
}
*/