/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:20:13 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 18:20:22 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*it;
	int		count;

	if (!lst)
		return (0);
	count = 1;
	it = lst;
	while (it->next)
	{
		it = it->next;
		count++;
	}
	return (count);
}
