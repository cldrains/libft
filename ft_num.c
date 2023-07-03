/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepsi <pepsi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:53:27 by tevers            #+#    #+#             */
/*   Updated: 2023/06/30 03:53:50 by pepsi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		number;

	sign = 1;
	i = 0;
	number = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	while (57 >= str[i] && str[i] >= 48)
		number = 10 * number + (str[i++] - 48);
	return (number * sign);
}

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

	if (n == 0)
		return (ft_strdup(""));
	nb = n;
	len = lenght(n);
	str = ft_calloc(len +1, sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	str = re_string(nb, str, len);
	return (str);
}
