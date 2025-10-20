/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethrober <ethrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:54:51 by ethrober          #+#    #+#             */
/*   Updated: 2025/10/16 11:19:58 by ethrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void	ft_strtoupper(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] = ft_toupper(str[i]);
}

int	ft_printf_hexa(unsigned int num, char format)
{
	int		len;
	char	*str;

	len = 0;
	if (num == 0)
		return (write(1, "0", 1));
	len = ft_hexlen(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	ft_memset(str, ' ', len + 1);
	str[len] = '\0';
	while (num)
	{
		str[--len] = HEXADECIMAL[num % 16];
		num /= 16;
	}
	if (format == 'X')
		ft_strtoupper(str);
	len = ft_printf_str(str);
	free(str);
	return (len);
}
