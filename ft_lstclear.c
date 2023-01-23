/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:27:25 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 18:27:38 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" // t_list

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*it;
	t_list	*to_free;

	if (!lst)
		return ;
	it = *lst;
	while (it)
	{
		if (it->content)
			del(it->content);
		to_free = it;
		it = it->next;
		free(to_free);
	}
	*lst = NULL;
}
