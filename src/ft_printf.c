/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:53 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/06 16:08:27 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_format(const char *str, va_list ap)
{
	if (*str == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (*str == 's')
		return (ft_print_str(va_arg(ap, char *)));
	else if (*str == 'p')
		return (ft_print_pointer(va_arg(ap, void *)));
	else if (*str == 'd')
		return (ft_print_decimal(va_arg(ap, int)));
	else if (*str == 'i')
		return (ft_print_integer(va_arg(ap, int)));
	else if (*str == 'u')
		return (ft_print_unsigned_decimal(va_arg(ap, size_t)));
	else if (*str == 'x')
		return (ft_print_hexadecimal(va_arg(ap, void *)));
	else if (*str == 'X')
		return (ft_print_hexadecimal_upper(va_arg(ap, void *)));
	else if (*str == '%')
		return (ft_print_percent(va_arg(ap, void *)));
	else
		return (write(1, "(null)", 6));
}

int	ft_printf(const char *str, ...){
	va_list		ap;
	size_t		i;
	int			len;

	i = -1;
	len = 0;
	va_start (ap, str);
	while (str[++i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			len += 	ft_format(str + i, ap);
			i++;	
		}	
		else
			ft_putchar_fd(str[i], 1);
	}
	va_end(ap);
	return (len);
}
