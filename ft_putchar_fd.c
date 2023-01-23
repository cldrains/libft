/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 01:32:22 by tevers            #+#    #+#             */
/*   Updated: 2022/11/09 01:49:48 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h> //write

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
