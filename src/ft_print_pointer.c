/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:50 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/02 22:17:31 by brpereir         ###   ########.fr       */
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

void	print_hex(int c)
{
	const char *base;

	if(!c)
		return (write(1, "(nil)", 5));
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

int ft_print_pointer(void *c)
{
	print(c);
	return(print_len(c));
}