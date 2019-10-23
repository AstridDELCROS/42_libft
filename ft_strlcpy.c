/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:36:09 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/22 16:21:11 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len = (len_src < dstsize - 1) ? len_src : dstsize - 1;
	ft_memcpy(dst, src, len);
	*(dst + len) = '\0';
	return (len_src);
}
