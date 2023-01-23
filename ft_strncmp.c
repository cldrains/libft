/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 23:53:03 by tevers            #+#    #+#             */
/*   Updated: 2022/11/09 00:16:08 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int i)
{
	while (i)
	{
		if (*str1 != *str2 || *str2 == '\0')
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
		i--;
	}
	return (0);
}
