/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:16:38 by tevers            #+#    #+#             */
/*   Updated: 2022/11/16 18:18:52 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *str, char const *set)
{
	char	*strdone;
	int		i;
	int		j;

	if (!str)
		return (NULL);
	if (!*str)
		return (ft_strdup(""));
	i = 0;
	j = ft_strlen(str) - 1;
	while ((check(str[i], set)) == 1)
		i++;
	if (i >= j)
		return (ft_strdup(""));
	while ((check(str[j], set)) == 1)
		j--;
	strdone = ft_substr(str, i, (j + 1 - i));
	return (strdone);
}
