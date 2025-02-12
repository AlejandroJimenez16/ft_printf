/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 11:55:50 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/12 11:57:55 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int i;
	int size;
	char temp[10];

	size = 0;
	if (nbr == 0)
		size += ft_putchar('0');
	i = 0;
	while (nbr > 0)
	{
		temp[i] = (nbr % 10) + '0';
		i++;
		nbr = nbr / 10;
	}
	while (i > 0)
	{
		size += ft_putchar(temp[i - 1]);
		i--;
	}
	return (size);
}