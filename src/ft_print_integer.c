/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:43:50 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/06 15:56:04 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/ft_printf.h"

int	ft_print_integer(int c)
{
	char *temp;

	if(!c)
		return(write(1, "(null)", 6));
	temp = ft_itoa(c);
	ft_putstr_fd(temp, 1);
	return(ft_strlen(temp));
}
	