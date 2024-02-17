/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:28:46 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/17 12:54:55 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexa_handler(unsigned long long p)
{
	char	*buff;
	int		count;

	count = 0;
	buff = "0123456789abcdef";
	if (p == 0)
		return (ft_putchar('0'));
	if (p >= 16)
		count += ft_hexa_handler(p / 16);
	ft_putchar(buff[p % 16]);
	count++;
	return (count);
}

int	ft_putadd(void *ptr)
{
	int					count;
	unsigned long long	p;

	count = 0;
	p = (unsigned long long) ptr;
	count += ft_putstr("0x");
	count += ft_hexa_handler(p);
	return (count);
}
