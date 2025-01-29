/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:38:49 by alejandj          #+#    #+#             */
/*   Updated: 2025/01/29 12:48:32 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_format(va_list args)
{
	void	*ptr;
	int		size;

	size = 0;
	ptr = va_arg(args, void *);
	if (ptr == NULL)
		size += ft_putstr("(nil)");
	else
		size += ft_putstr("0x") + ft_putnbr_base(va_arg(args, int),
				"0123456789abcdef");
	return (size);
}

int	apply_format(va_list args, char c)
{
	int	size;

	size = 0;
	if (c == 'c')
		size += ft_putchar(va_arg(args, int));
	if (c == 's')
		size += ft_putstr(va_arg(args, char *));
	if (c == 'p')
		size += p_format(args);
	if (c == 'd')
		size += ft_putnbr_base(va_arg(args, int), "0123456789");
	if (c == 'i')
		size += ft_putnbr_base(va_arg(args, int), "0123456789");
	if (c == 'u')
		size += ft_putnbr_base(va_arg(args, unsigned int), "0123456789");
	if (c == 'x')
		size += ft_putnbr_base(va_arg(args, int), "0123456789abcdef");
	if (c == 'X')
		size += ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF");
	if (c == '%')
		size += ft_putchar('%');
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
/*
int	main(void)
{	
	ft_printf("Caracter: \n");
	printf("Original: %c\n", 'A');
	ft_printf("Copia: %c\n", 'A');
	ft_printf("\n");
	ft_printf("Strings: \n");
	printf("Original: %s\n", "Hola");
	ft_printf("Copia: %s\n", "Hola");
	ft_printf("\n");
	ft_printf("Punteros (p): \n");
	
	char *ptr;
	ptr = NULL;
	
	printf("Original: %p\n", (void *)ptr);
	ft_printf("Copia: %p\n", (void *)ptr);
	ft_printf("\n");
	ft_printf("Enteros (d): \n");
	printf("Original: %d\n", 123);
	ft_printf("Copia: %d\n", 123);
	ft_printf("\n");
	ft_printf("Enteros (i): \n");
	printf("Original: %i\n", 234);
	ft_printf("Copia: %i\n", 234);
	ft_printf("\n");
	ft_printf("Enteros (u): \n");
	printf("Original: %u\n", 345);
	ft_printf("Copia: %u\n", 345);
	ft_printf("\n");
	ft_printf("Hexadecimal (x): \n");
	printf("Original: %x\n", 456);
	ft_printf("Copia: %x\n", 456);
	ft_printf("\n");
	ft_printf("Hexadecimal (X): \n");
	printf("Original: %X\n", 456);
	ft_printf("Copia: %X\n", 456);
	ft_printf("\n");
	ft_printf("Porcentaje: \n");
	printf("Original: %%\n");
	ft_printf("Copia: %%\n");
	ft_printf("\n");
}
*/
