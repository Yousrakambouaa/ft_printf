/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:34:58 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/17 14:52:26 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	which_format(va_list args, char format, int *count)
{
	if (format == 'd' || format == 'i')
		*count += ft_putnbr(va_arg(args, int));
	if (format == 'c')
		*count += ft_putchar(va_arg(args, int));
	if (format == 's')
		*count += ft_putstr(va_arg(args, char *));
	if (format == 'u')
		*count += ft_putnbr_u(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		*count += ft_puthexa(va_arg(args, unsigned int), format);
	if (format == 'p')
		*count += ft_putadd(va_arg(args, void *));
	if (format == '%')
		*count += ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	count = 0;
	i = 0;
	va_start(args, format);
	if (write(1, 0, 0) == -1) 
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			which_format(args, format[i], &count);
		}
		else
		{
			ft_putchar(format[i]);
			count ++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
