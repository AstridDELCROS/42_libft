/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:28:06 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/21 22:21:25 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s1[len] != '\0')
		len++;
	if (!(dest = (char *)malloc(sizeof(*dest) * len + 1)))
		return (NULL);
	while (i <= len)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
