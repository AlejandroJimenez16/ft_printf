/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:55:50 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/13 13:17:46 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
	{
		size += ft_putchar('0');
		return (size);
	}
	if (nbr >= 10)
		size += ft_putnbr_unsigned(nbr / 10);
	size += ft_putchar(nbr % 10 + '0');
	return (size);
}
