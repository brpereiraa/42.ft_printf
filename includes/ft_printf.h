/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:44:48 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/17 21:36:51 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdint.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_print_unsigned_decimal(unsigned int n);
int		ft_print_percent(void);
int		ft_print_str(char *s);
int		ft_print_integer(int c);
int		ft_print_char(int c);
int		ft_print_pointer(unsigned long c);
int		ft_print_decimal(int c);
int		ft_print_hex(unsigned int c, char casing);
int		ft_printf(const char *str, ...);

#endif
