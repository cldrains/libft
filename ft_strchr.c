/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:53:39 by tevers            #+#    #+#             */
/*   Updated: 2022/11/09 00:44:17 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int	i;
	int	j;

	i = ft_strlen(s);
	j = 0;
	if (!(char)c)
		return (&s[i]);
	if (!s)
		return (NULL);
	while (s[j] != '\0' && j < i)
	{
		if ((char) c == s[j])
			return (&s[j]);
		j++;
	}
	return (NULL);
}
