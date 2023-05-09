/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 01:56:10 by marvin            #+#    #+#             */
/*   Updated: 2023/05/07 01:56:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int print_len(int c){
	int	len;
	
	len = 0;
	while(c)
	{
		len++;
		c /= 16;
	}
	return (len);
}

int	print_hex(int c)
{
	const char *base;

	if(!c)
		return (1, "(nil)", 5);
	base = "0123456789abcdef";
	if(c < 0)
		ft_putchar_fd(1, '-');
	else if(c < 16)
		ft_putchar_fd(1, base[c])
	else
	{
		print_hex(c / 16);
		print_hex(c % 16);
	}
	return(print_len(c));
}
