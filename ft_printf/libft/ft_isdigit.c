/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethrober <ethrober@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:41:26 by ethrober          #+#    #+#             */
/*   Updated: 2025/10/03 12:29:28 by ethrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('9'));
	printf("%d", ft_isdigit('A'));
	printf("%d", ft_isdigit('z'));
	printf("%d", ft_isdigit('.'));
	printf("%d", ft_isdigit('|'));
}*/