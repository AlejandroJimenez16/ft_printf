/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:31:07 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/18 11:37:51 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(char const *str, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr_dec(int nbr);
int		ft_putnbr_hex(unsigned int nbr, char *base);
int		ft_putnbr_unsigned(unsigned int nbr);
int		ft_print_pointer(unsigned long nbr, char *base);
size_t	ft_strlen(const char *s);

#endif