/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:59:38 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/12 16:32:13 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long nbr, char *base)
{
	int		size;
	int		base_size;

	size = 0;
	base_size = ft_strlen(base);
	if (nbr == 0){
		size += ft_putchar('0');
		return (size);
	}
	if (nbr >= (unsigned long)base_size)
		size += ft_print_pointer(nbr / base_size, base);
	size += ft_putchar(base[nbr % base_size]);
	return (size);
}
