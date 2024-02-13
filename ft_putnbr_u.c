/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:23:24 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/08 17:01:07 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


static int	ft_intlen(unsigned long nbr)
{
	int	i;

	i = 0;
	
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

int	ft_putnbr_u(unsigned int nbr)
{
	int	len;

	len = ft_intlen(nbr);
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}

	if (nbr > 9)
	{
		ft_putnbr_u(nbr / 10);
		ft_putnbr_u(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (len);
}

