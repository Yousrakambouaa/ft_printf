/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:06:46 by ykamboua          #+#    #+#             */
/*   Updated: 2024/01/23 13:16:32 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
		
	}
	if (nbr < 9)
	{
		ft_putchar(nbr);
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(nbr - 48);
	}
}
int main()
{
	ft_putnbr(766746);
}