/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:16:28 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 19:08:02 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s1;

	if (!*s)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(s);
	if (len > j + start)
		len = j + start;
	s1 = ft_calloc(len + 1, sizeof(char));
	if (!s1)
		return (NULL);
	if (start > j)
		return (free (s1), ft_calloc(sizeof(char), 1));
	while (s[start + i] && i != len && i < j)
	{
		s1[i] = s[start + i];
		i++;
	}
	return (s1);
}
