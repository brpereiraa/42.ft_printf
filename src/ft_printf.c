/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:53 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/17 21:31:25 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_format(const char c, va_list ap)
{
	if (c == 'c')
		return (ft_print_char(va_arg(ap, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(ap, char *)));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(ap, unsigned long long )));
	else if (c == 'd')
		return (ft_print_decimal(va_arg(ap, int)));
	else if (c == 'i')
		return (ft_print_integer(va_arg(ap, int)));
	else if (c == 'u')
		return (ft_print_unsigned_decimal(va_arg(ap, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(ap, unsigned int), 'a'));
	else if (c == 'X')
		return (ft_print_hex(va_arg(ap, unsigned int), 'A'));
	else if (c == '%')
		return (ft_print_percent());
	else
		return (write(1, "0", 1));
}

int	ft_printf(const char *str, ...)
{
	va_list		ap;
	size_t		i;
	int			len;

	i = -1;
	len = 0;
	va_start (ap, str);
	while (str[++i])
	{
		if (str[i] == '%')
		{
			len += ft_format(str[++i], ap);
		}	
		else
		{
			ft_putchar_fd (str[i], 1);
			len++;
		}
	}
	va_end (ap);
	return (len);
}
