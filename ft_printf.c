/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:34:58 by ykamboua          #+#    #+#             */
/*   Updated: 2024/01/26 18:30:58 by ykamboua         ###   ########.fr       */
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
			// if (fornat [i] == 'p')
			// 	count += ft_putptr(va_arg(args, void *));
			if (format[i] == 'x')
			{
				/* code */
			}
			
			if (format[i] == '%')
			{
				ft_putchar('%');
				count++;
			}
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
	// char str[10] ="hhhh";
	// int a = -96;
	// printf("%d\n",ft_printf("hello%u %s \n",a ,str));
	// printf("\n");
	// printf("%d\n",printf("hello%u %s \n",a ,str));
	int *p;
	printf("%p",p);
}