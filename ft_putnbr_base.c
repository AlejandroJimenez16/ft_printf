/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:37:18 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/13 13:17:25 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		base_size;

	size = 0;
	base_size = ft_strlen(base);
	if (nbr == 0)
	{
		size += ft_putchar('0');
		return (size);
	}
	if (nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr >= base_size)
		size += ft_putnbr_base(nbr / base_size, base);
	size += ft_putchar(base[nbr % base_size]);
	return (size);
}
