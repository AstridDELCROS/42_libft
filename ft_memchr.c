/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:20:57 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/21 22:16:19 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	d;
	unsigned char	*str;
	size_t			i;

	d = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (str[i] == d)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
