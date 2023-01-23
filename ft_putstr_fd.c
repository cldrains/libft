/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:59:04 by tevers            #+#    #+#             */
/*   Updated: 2022/11/09 02:00:34 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h> //write

void	ft_putstr_fd(const char *s, int fd)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	while (s[j] && j < i)
		write(fd, &s[j++], 1);
}
