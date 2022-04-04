/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 10:00:54 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/04 15:35:01 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** function return the length of dst + the length of src
*/
size_t	ft_strlcat(char *dest, const char *src, size_t	size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	count = 0;
	if (size < 1 || size <= dest_len)
		return (src_len + size);
	while (count < (size - dest_len - 1) && src[count])
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	dest[dest_len + count] = '\0';
	return (dest_len + src_len);
}

/* int	main(void)
{
	char	c[] = "a";
	char	d[] = "lorem";

	printf("%zu\n", ft_strlcat(c, d, 1));
	printf("%zu", strlcat(c, d, 1));
} */
