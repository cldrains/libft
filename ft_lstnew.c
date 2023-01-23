/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:35:51 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 18:21:02 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list	*my_list;

	my_list = malloc(sizeof(t_list));
	if (!my_list)
		return (NULL);
	my_list->content = (void *)content;
	my_list->next = NULL;
	return (my_list);
}
