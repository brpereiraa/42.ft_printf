/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 23:26:09 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/15 20:50:17 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static char	*if_zero(char *str)
{
	str[0] = '0';
	return (str);
}

static size_t	count(size_t n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa_long(size_t n)
{
	char		*c;
	size_t		num;
	size_t		nb;

	nb = n;
	num = count (nb);
	c = (char *)malloc(sizeof(char) * (num + 1));
	if (!c)
		return (NULL);
	c[num--] = '\0';
	if (nb == 0)
		return (if_zero(c));
	while (nb > 0)
	{
		c[num--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (c);
}

int	ft_print_unsigned_decimal(size_t c)
{
	char	*temp;

	if (!c)
		return (write(1, "(null)", 6));
	temp = ft_itoa_long(c);
	ft_putstr_fd (temp, 1);
	return (ft_strlen (temp));
}
