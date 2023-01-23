/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:53:40 by tevers            #+#    #+#             */
/*   Updated: 2022/11/20 02:03:43 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	// strlen size_t
#include <stdlib.h> // malloc

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s2;

	i = ft_strlen(s1);
	s2 = (char *)malloc(i + 1);
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, i + 1);
	return (s2);
}
