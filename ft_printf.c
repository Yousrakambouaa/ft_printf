/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:34:58 by ykamboua          #+#    #+#             */
/*   Updated: 2024/01/23 17:54:59 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	va_start(args, format);

	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd')
				ft_putnbr(va_arg(args, int));
			if (format[i] == 'c')
				ft_putchar(va_arg(args, int));
			if (format[i] == 's')
				ft_putstr(va_arg(args, char *));
			if (format[i] == 'u')
				ft_putnbr_u(va_arg(args, unsigned long));
			
			
			if (format[i] == '%')
				ft_putchar('%');
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(args);
	return i;
}

int main()
{
	char str[10] ="hhhh";
	int a = -96;
	ft_printf("hello %s %c %u",str ,'p' , a);
	printf("\n");
	printf("hello %s %c %u",str ,'p' , a);
}