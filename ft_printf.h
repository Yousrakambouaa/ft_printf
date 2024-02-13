/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:45:27 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/09 16:29:47 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_H
#define	LIBFT_PRINTF_H
#include <stddef.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long nbr);
int	ft_putnbr_u(unsigned int nbr);
int	ft_puthexa(unsigned int nbr, char c);
int	ft_putadd(void *ptr);
int ft_printf(const char *format, ...);
#endif
