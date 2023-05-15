/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:56:10 by marvin            #+#    #+#             */
/*   Updated: 2023/05/15 22:03:47 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	print_len(int c)
{
	int	len;

	len = 0;
	while (c)
	{
		len++;
		c /= 16;
	}
	return (len);
}

static void	print(int c)
{
	const char	*base;

	base = "0123456789abcdef";
	if (c < 0)
		ft_putchar_fd (1, '-');
	else if (c < 16)
		ft_putchar_fd (1, base[c]);
	else
	{
		print (c / 16);
		print (c % 16);
	}
}

int	ft_print_hex(int c)
{
	if (!c)
		return (write(1, "0", 1));
	print (c);
	return (print_len(c));
}
