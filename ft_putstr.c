/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykamboua <ykamboua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:21:04 by ykamboua          #+#    #+#             */
/*   Updated: 2024/02/04 20:48:45 by ykamboua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return(i);
// }
int	ft_putstr(char *str)
{
	int	i;
	// int	res;

	i = 0;
	// res = ft_strlen(str);
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
// int main()
// {
// 	printf("%d",ft_putstr("hello\n"));
// }