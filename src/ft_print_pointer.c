/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:50 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/17 23:26:59 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	print_len(unsigned long c)
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

void	print_hex(unsigned long c)
{
	if (c >= 16)
	{
		print_hex(c / 16);
		print_hex(c % 16);
	}
	else
	{
		if (c <= 9)
			ft_print_char(c + '0');
		else
			ft_print_char(c	- 10 + 'a');
	}
}

int	ft_print_pointer(unsigned long c)
{
	if (!c)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	print_hex (c);
	return (print_len (c) + 2);
}
