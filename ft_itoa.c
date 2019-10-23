/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:28:51 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/22 22:05:49 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizecalc(int n)
{
	int	res;

	res = (n <= 0 ? 1 : 0);
	while (n != 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	unsigned int	num;
	char			*res;
	int				size;

	num = (n < 0 ? -n : n);
	size = ft_sizecalc(n);
	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	res[size--] = '\0';
	while (size >= 0)
	{
		res[size] = num % 10 + 48;
		num = num / 10;
		size--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
