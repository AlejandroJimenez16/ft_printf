/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:37:18 by alejandj          #+#    #+#             */
/*   Updated: 2025/01/28 14:08:13 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_unsigned(int nbr)
{
	if (nbr > 0)
		return (1);
	return (0);
}

int	convert_to_base(int nbr, char *base, int base_size, char *temp)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		temp[i] = base[nbr % base_size];
		i++;
		nbr = nbr / base_size;
	}
	return (i);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		size;
	int		base_size;
	char	temp[100];

	size = 0;
	base_size = 0;
	if (nbr == 0)
		size += ft_putchar('0');
	base_size = ft_strlen(base);
	if (base_size < 2)
		return (0);
	if (!is_unsigned(nbr) && nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
	}
	i = convert_to_base(nbr, base, base_size, temp);
	while (i > 0)
	{
		size += ft_putchar(temp[i - 1]);
		i--;
	}
	return (size);
}
