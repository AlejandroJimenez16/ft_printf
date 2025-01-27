/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:38:49 by alejandj          #+#    #+#             */
/*   Updated: 2025/01/27 17:37:10 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	apply_format(va_list args, char c)
{
	int	size;

	size = 0;
	if (c == 'c')
		size += ft_putchar(va_arg(args, int));
	if (c == 's')
		size += ft_putstr(va_arg(args, char *));
	if (c == 'd')
		size += ft_putnbr(va_arg(args, int));
	return (size);
}

int	ft_printf(char const *str, ...)
{
	int		i;
	int		size;
	va_list	args;

	va_start(args, str);
	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			size += apply_format(args, str[++i]);
			i++;
		}
		size += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (size);
}
int main(void)
{
	printf("Original: %d\n", 1234);
	ft_printf("Copia: %d\n", 1234);
}
