/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 22:25:44 by marvin            #+#    #+#             */
/*   Updated: 2023/05/08 22:25:44 by marvin           ###   ########.fr       */
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

static int	print_hex_upper(int c)
{
	const char *base;

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
}
