/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethrober <ethrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 12:44:28 by ethrober          #+#    #+#             */
/*   Updated: 2025/10/20 12:20:27 by ethrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_parse_format(va_list args, const char format)
{
	int	n;

	n = 0;
	if (format == 'c')
		n += ft_printf_char(va_arg(args, int));
	else if (format == 's')
		n += ft_printf_str(va_arg(args, char *));
	else if (format == 'p')
		n += ft_printf_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		n += ft_printf_nbr(va_arg(args, int));
	else if (format == 'u')
		n += ft_printf_uint(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		n += ft_printf_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		n += ft_printf_char('%');
	return (n);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		n;

	n = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			n += ft_printf_parse_format(args, *format);
		}
		else
			n += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (n);
}

// int	main(void)
// {
// 	char *str1;
// 	char *str2;
// 	char *str3;
// 	char *str4;
// 	char c1;
// 	int nbr1;
// 	int nbr2;
// 	unsigned int nbr3;
// 	int nbr4;
// 	int nbr5;

// 	str1 = "Ceci";
// 	str2 = "est";
// 	str3 = "un";
// 	str4 = "test";
// 	c1 = '!';
// 	nbr1 = 42;
// 	nbr2 = 26;
// 	nbr3 = 100;
// 	nbr4 = 16;
// 	nbr5 = 64;
// 	printf("PRINTF\t\t= %s %s %s %s %c %d %i %p %u %x %X %% ^^\n", str1, str2,
// 		str3, str4, c1, nbr1, nbr2, &str1, nbr3, nbr4, nbr5);
// 	ft_printf("FT_PRINTF\t= %s %s %s %s %c %d %i %p %u %x %X %% ^^\n", str1,
// 		str2, str3, str4, c1, nbr1, nbr2, &str1, nbr3, nbr4, nbr5);
// }