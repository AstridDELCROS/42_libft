/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 21:21:39 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/21 22:20:12 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strcrea(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	j = 0;
	while (s[j] != '\0' && s[j] != c)
	{
		str[j] = s[j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

static int		ft_count_word(char const *str, char c)
{
	unsigned int	count;
	unsigned int	i;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
		{
			count++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**new_str;

	if (!s)
		return (NULL);
	if (!(new_str = (char**)malloc(sizeof(char*) * (ft_count_word(s, c) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			new_str[j] = ft_strcrea(s + i, c);
			j++;
		}
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	new_str[j] = NULL;
	return (new_str);
}
