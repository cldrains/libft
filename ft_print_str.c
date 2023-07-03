/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepsi <pepsi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 04:21:13 by tevers            #+#    #+#             */
/*   Updated: 2023/06/28 03:28:15 by pepsi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_strl(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		ft_print_char(str[i]);
	return (i);
}

int	ft_print_str(char *str)
{
	if (str == NULL)
		return (ft_print_strl("(null)"));
	return (ft_print_strl(str));
}

int	ft_print_char(int c)
{
	return (write(1, &c, 1), 1);
}

int	ft_print_color(char flag)
{
	if (flag == 'e') /* exit - returns new line, reset color to default for next usage */
	{
		ft_printf("\033[0m");
		return (ft_print_char('\n'));
	}
	if (flag == 'n') /* normal - reset color */
	    ft_printf("\033[0m");
	if (flag == 'w') /* white */
	    ft_printf("\033[0;47m");
	if (flag == 'g') /* green */
    	ft_printf("\033[0;92m");
	if (flag == 'r') /* red */
	    ft_printf("\033[1;37;41m");
	if (flag == 'y') /* yellow */
  		ft_printf("\033[0;33m");
	if (flag == 'b') /* blue */
		ft_printf("\033[0;94m");
	return (0);
}
