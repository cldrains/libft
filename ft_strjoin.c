/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:14:27 by tevers            #+#    #+#             */
/*   Updated: 2022/11/16 12:57:42 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(int len, int start, const char *src, char *dst)
{
	int		i;
	int		j;

	j = 0;
	i = 0 + start;
	while (j < len)
		dst[i++] = src[j++];
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*together;
	int		len_s1;
	int		len_s2;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	together = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!together)
		return (NULL);
	together = ft_join(len_s1, 0, s1, together);
	together = ft_join(len_s2, len_s1, s2, together);
	together[len_s1 + len_s2] = '\0';
	return (together);
}
