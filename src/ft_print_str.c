/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:50:31 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/06 16:03:32 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_str(char *s)
{
	size_t i;
	
	i = -1;
	if (!s)
		return (write(1, "(nil)", 6));
	while (s[++i])
		ft_putchar_fd(s[i], 1);
	return(i);
}
