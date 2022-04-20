/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 16:59:21 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/19 12:42:21 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_itoa(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len_itoa;
	long int		nb;

	nb = n;
	len_itoa = ft_len_itoa(n);
	if (nb == -2147483648)
		return (ft_substr("-2147483648", 0, 11));
	str = (char *)malloc(sizeof(char) * (len_itoa + 1));
	if (!str)
		return (NULL);
	str[len_itoa--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[len_itoa--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}

/* int	main(void)
{
	//printf("%d", ft_len_itoa(-322));
	printf("%s", ft_itoa(0));
}
 */