/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:44:48 by brpereir          #+#    #+#             */
/*   Updated: 2023/05/06 16:04:21 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"

int		ft_print_unsigned_decimal(size_t n);
int		ft_print_percent(void);
int		ft_print_str(char *s);
int		ft_print_integer(int c);
int		ft_print_char(int c);

#endif
