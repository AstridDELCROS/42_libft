/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:39:04 by adelcros          #+#    #+#             */
/*   Updated: 2019/10/22 22:03:15 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_element;

	if (!(new_element = (t_list*)ft_calloc(sizeof(*new_element), 1)))
		return (NULL);
	new_element->content = content;
	return (new_element);
}
