/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygonzale <ygonzale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:46:28 by ygonzale          #+#    #+#             */
/*   Updated: 2022/04/05 10:52:36 by ygonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Cuenta la cantidad de caract de una string
**
** @param {const char} La string que quiers contar
**
** @return {size_t} El nº de caracteres
*/
size_t	ft_strlen(const char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

/* 
int	main(void)
{
	char	a[] = "hola";

	printf("%zu", ft_strlen(a));
}
*/