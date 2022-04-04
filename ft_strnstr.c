/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:13:56 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/04 10:00:08 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	num;

	i = 0;
	num = ft_strlen(needle);
	if (num == 0)
		return ((char *)&haystack[0]);
	while (haystack[i] != '\0' && i < len)
	{
		n = 0;
		while (needle[n] && (needle[n] == haystack[i + n]) && len > i + n)
		{
			if (needle[n + 1] == '\0')
			{
				return ((char *)&haystack[i]);
			}
			n++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	s1[] = "lorem ipsum dolor sit amet";
	char	s2[] = "ipsumm";

	printf("%s\n", ft_strnstr(s1, s2, 5));
	printf("%s", strnstr(s1, s2, 5));
}
*/