/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:53:29 by tevers            #+#    #+#             */
/*   Updated: 2022/11/09 05:24:00 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tmp;

	if (size && nitems > SIZE_MAX / size)
		return (NULL);
	tmp = (char *) malloc(size * nitems);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, nitems * size);
	return (tmp);
}
