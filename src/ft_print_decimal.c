/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:50:56 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/06 16:05:15 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_decimal(int c)
{
	char	*temp;
	
	if (!c)
		return(write(1, "0", 1));
	temp = ft_itoa(c);
	ft_putstr_fd (temp, 1);
	return(ft_strlen(temp));
}
