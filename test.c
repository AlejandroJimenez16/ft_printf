/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:24:09 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/13 14:06:48 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int main() {
    
    char c = 'A';
    char *s = "Hello, world!";
    void *p = (void *)s;
    int d = -42;
    int i = 2147483647;
    unsigned int u = 4294967295;
    int x = 37359259;
    int X = 37359259;
    
    // Caracteres
    printf("1. Caracter (original): %c\n", c);
    ft_printf("1. Caracter (copia): %c\n", c);
    ft_printf("\n");
    
    // Cadenas
    printf("2. Cadena (original): %s\n", s);
    ft_printf("2. Cadena (copia): %s\n", s);
    ft_printf("\n");

    // Puntero (dirección de memoria)
    printf("3. Puntero (original): %p\n", p);
    ft_printf("3. Puntero (copia): %p\n", p);
    ft_printf("\n");

    // Enteros con variaciones
    printf("4. Decimal (d) (original): %d\n", d);
    ft_printf("4. Decimal (d) (copia): %d\n", d);
    ft_printf("\n");
    
    printf("5. Decimal (i) (original): %i\n", i);
    ft_printf("5. Decimal (i) (copia): %i\n", i);
    ft_printf("\n");

    // Entero sin signo
    printf("6. Unsigned (original): %u\n", u);
    ft_printf("6. Unsigned (copia): %u\n", u);
    ft_printf("\n");

    // Hexadecimal en minúsculas
    printf("7. Hexadecimal (x) (original): %x\n", x);
    ft_printf("7. Hexadecimal (x) (copia): %x\n", x);
    ft_printf("\n");

    // Hexadecimal en mayúsculas
    printf("8. Hexadecimal (X) (origina): %X\n", X);
    ft_printf("8. Hexadecimal (X) ((copia): %X\n", X);
    ft_printf("\n");

    // Porcentaje
    printf("9. Porcentaje (original): %%\n");
    ft_printf("9. Porcentaje (copia): %%\n");
    ft_printf("\n");

    // Pruebas raras
    printf("10. Carácter nulo (original): %c\n", '\0');
    ft_printf("10. Carácter nulo (copia): %c\n", '\0');
    ft_printf("\n");

    printf("11. Carácter 0 (original): %c\n", '0');
    ft_printf("11. Carácter 0 (copia): %c\n", '0');
    ft_printf("\n");
    
    printf("12. Cadena nula (original): %s\n", (char *)NULL);
    ft_printf("12. Cadena nula (copia): %s\n", (char *)NULL);
    ft_printf("\n");
    
    printf("13. Puntero nulo (original): %p\n", NULL);
    ft_printf("13. Puntero nulo (copia): %p\n", NULL);
    ft_printf("\n");
    
    printf("14. Número grande negativo (original): %d\n", INT_MIN);
    ft_printf("14. Número grande negativo (copia): %d\n", INT_MIN);
    ft_printf("\n");
    
    printf("15. Número fuera de rango de unsigned (original): %u\n", -1);
    ft_printf("15. Número fuera de rango de unsigned (copia): %u\n", -1);
    ft_printf("\n");
    
    return 0;
}
