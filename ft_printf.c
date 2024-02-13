/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:34:58 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/13 21:04:11 by ykamboua         ###   ########.fr       */
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
	if (write(1, 0, 0) == -1) 
		return (-1);
	// while (format[i])
	// {
	// 	if (format[i] == '%')
	// 	{
	// 		i++;
	// 		if (format[i] == 'd' || format[i] == 'i')
	// 			count += ft_putnbr(va_arg(args, int));;
	// 		if (format[i] == 'c')
	// 			count += ft_putchar(va_arg(args, int));
	// 		if (format[i] == 's')
	// 			count += ft_putstr(va_arg(args, char *));
	// 		if (format[i] == 'u')
	// 			count += ft_putnbr_u(va_arg(args, unsigned long));
	// 		if (format[i] == 'x' || format[i] == 'X')
	// 			count += ft_puthexa(va_arg(args, unsigned int), format[i]);
	// 		if (format[i] == 'p')
	// 			count += ft_putadd(va_arg(args, void*));
	// 		if (format[i] == '%')
	// 			count += ft_putchar('%');
	// 	}
	// 	else
	// 	{
	// 		ft_putchar(format[i]);
	// 		count ++;
	// 	}
	// 	i++;
	// }
	return (va_end(args), count);
}

// int main()
// {
// 	char *s="hello";
	
// 	printf("%d\n",printf("%p\n",s));
// 	printf("%d\n",ft_printf("%p\n",s));
// }