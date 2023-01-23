/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 02:57:23 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 19:11:33 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s1;

	i = -1;
	s1 = ft_strdup(s);
	if (!s1 || !f)
		return (NULL);
	while (s1[++i])
		s1[i] = f(i, s1[i]);
	return (s1);
}
