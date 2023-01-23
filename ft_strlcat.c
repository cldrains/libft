/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:53:41 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 19:15:03 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	destl;
	size_t	srcl;
	size_t	i;

	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	i = 0;
	if (n <= destl)
		return (n + srcl);
	n -= (destl + 1);
	while (src[i] && n--)
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (destl + srcl);
}
