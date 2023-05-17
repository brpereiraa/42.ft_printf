/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:56:10 by marvin            #+#    #+#             */
/*   Updated: 2023/05/17 21:33:38 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	print_len(unsigned int c)
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

static void	print(unsigned int c, char casing)
{
	if (c < 0)
	{
		ft_putchar_fd('-', 1);
		c = -c;
	}
	else if (c >= 16)
	{
		print(c / 16, casing);
		print(c % 16, casing);
	}
	else
	{
		if (c < 10)
			ft_putchar_fd((c + 48), 1);
		else
		{
			if (casing == 'a')
				ft_putchar_fd((c - 10 + 'a'), 1);
			else if (casing == 'A')
				ft_putchar_fd((c - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int c, char casing)
{
	if(c == 0)
		return (write(1, "0", 1));
	print(c, casing);
	return (print_len(c));
}
