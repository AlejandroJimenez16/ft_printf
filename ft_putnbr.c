/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:53:46 by alejandj          #+#    #+#             */
/*   Updated: 2025/01/27 17:23:12 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	special_cases(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		size += 11;
		return (size);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		size += 1;
		return (size);
	}
	return (size);
}

int	ft_putnbr(int n)
{
	char	temp[10];
	int		i;
	int		size;

	size = 0;
	if (n == INT_MIN || n == 0)
	{
		size += special_cases(n);
		return (size);
	}
	if (n < 0)
	{
		size += ft_putchar('-');
		n = -n;
	}
	i = 0;
	while (n > 0)
	{
		temp[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	while (i > 0)
	{
		size += ft_putchar(temp[i - 1]);
		i--;
	}
	return (size);
}