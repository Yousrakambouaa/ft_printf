/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:34:58 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/05 18:17:49 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int	i;
	int	count;

	count = 0;
	i = 0;
	va_start(args, format);
	
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
				count += ft_putnbr(va_arg(args, int));;
			if (format[i] == 'c')
				count += ft_putchar(va_arg(args, int));
			if (format[i] == 's')
				count += ft_putstr(va_arg(args, char *));
			if (format[i] == 'u')
				count += ft_putnbr_u(va_arg(args, unsigned long));
			if (format[i] == 'x' || format[i] == 'X')
				count += ft_puthexa(va_arg(args, unsigned int), format[i]);
			if (format[i] == 'p')
				count += ft_putptr(va_arg(args, void*));
			
			if (format[i] == '%')
				count += ft_putchar('%');
		}
		else
		{
			ft_putchar(format[i]);
			count ++;
		}
		i++;
	}
	return (va_end(args), count);
}

int main()
{
	char *s="hello";
	
	printf("%p\n",s);
	ft_printf("%p",s);
}