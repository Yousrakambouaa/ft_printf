/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 21:28:46 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/04 21:30:10 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	unsigned long long p = (unsigned long long)ptr;
	ft_putstr("0x");
	ft_puthexa(p, 'X');
	return (0);
}

int main()
{
	int y = 120;
	// int *p = &y;

	printf("%p\n",&y);
	ft_putptr(&y);
}
