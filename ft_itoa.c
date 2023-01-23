/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tevers <tevers@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 05:37:07 by tevers            #+#    #+#             */
/*   Updated: 2022/11/16 12:00:57 by tevers           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenght(int nbr)
{
	long	nb;
	int		len;

	nb = nbr;
	len = 0;
	if (nb == 0)
		return (1);
	while (nb < 0)
	{
		nb = nb * -1;
		++len;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		++len;
	}
	return (len);
}

static char	*re_string(long nb, char *str, int len)
{
	if (nb == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		str[len--] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = lenght(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	str = re_string(nb, str, len);
	return (str);
}
