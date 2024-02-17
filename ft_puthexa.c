/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:34:11 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/14 20:15:35 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned int nbr, char c)
{
	char	*buff;
	int		count;

	count = 0;
	if (c == 'X')
		buff = "0123456789ABCDEF";
	else
		buff = "0123456789abcdef";
	if (nbr == 0)
		return (ft_putchar('0'));
	if (nbr >= 16)
	{
		count += ft_puthexa(nbr / 16, c);
	}
	ft_putchar(buff[nbr % 16]);
	count++;
	return (count);
}
