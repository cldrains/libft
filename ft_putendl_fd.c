/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:50:28 by tevers            #+#    #+#             */
/*   Updated: 2022/11/29 18:34:25 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h> //write

void	ft_putendl_fd(const char *s, int fd)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s);
	j = 0;
	while (s[j] && j < i)
		write(fd, &s[j++], 1);
	write(fd, "\n", 1);
}
