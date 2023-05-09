/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:50 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/09 19:40:36 by brpereir         ###   ########.fr       */
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

void	print_hex(int c)
{
	const char	*base;

	base = "0123456789abcdef";
	if (c < 0)
		ft_putchar_fd (1, '-');
	else if (c < 16)
		ft_putchar_fd (1, base[c]);
	else
	{
		print_hex (c / 16);
		print_hex (c % 16);
	}
}

int	ft_print_pointer(void *c)
{
	if (!c)
		return (write(1, "0", 1));
	print_hex (c);
	return (print_len (c));
}
