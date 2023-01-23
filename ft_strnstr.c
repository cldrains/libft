/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:53:52 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 19:11:03 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (hay == needle || !*needle)
		return ((char *)hay);
	while (hay[i] && n > i)
	{		
		while (hay[i + j] == needle[j] && (i + j) < n && ft_strlen(hay) > i + j)
			j++;
		if (needle[j] == '\0')
			return ((char *)&hay[i]);
		if (!hay[j])
			return (NULL);
		j = 0;
		i++;
	}
	return (NULL);
}
