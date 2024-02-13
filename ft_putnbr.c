/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:06:46 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/08 17:00:03 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(long nbr)
{
	int	i;

	i = 0;

	if (nbr < 0)
		i = 1;
	while (nbr)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}
int	ft_putnbr(long nbr)
{
	int	res;

	res = ft_intlen(nbr);
	if (nbr == 0)
	{
		ft_putchar('0');
		return (1);
	}
	
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + 48);
	return (res);
}
// int main()
// {
// 	// printf("%d",ft_intlen(-123));
// 	// int a = ft_putnbr(0);
// 	// ft_putnbr(0);
// 	printf("\n%d\n",ft_putnbr(INT_MIN));
// 	printf("%d",INT_MIN);
// }