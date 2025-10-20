/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethrober <ethrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:02:37 by ethrober          #+#    #+#             */
/*   Updated: 2025/10/16 11:08:09 by ethrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdbool.h>
# include "./libft/libft.h"

# define HEXADECIMAL "0123456789abcdef"

int	ft_printf(const char *format, ...);
int	ft_printf_char(char c);
int	ft_printf_str(char *str);
int	ft_printf_nbr(int n);
int	ft_printf_uint(unsigned int n);
int	ft_printf_hexa(unsigned int n, char c);
int	ft_printf_ptr(unsigned long long n);

#endif
