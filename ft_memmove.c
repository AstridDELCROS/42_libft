/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:00:49 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/21 22:17:37 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	dest = (char *)dst;
	source = (const char *)src;
	i = 1;
	if (!dest && !source)
		return (NULL);
	if (source < dest)
	{
		while (i <= len)
		{
			dest[len - i] = source[len - i];
			i++;
		}
	}
	else
	{
		ft_memcpy(dest, source, len);
	}
	return (dest);
}
