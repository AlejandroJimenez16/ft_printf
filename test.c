/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:24:09 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/18 13:02:50 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int main(void) 
{    
    char c = 'A';
    char *s = "Hello, world!";
    void *p = (void *)s;
    int d = -42;
    int i = INT_MAX;
    unsigned int u = UINT_MAX;
    int x = 37359259;
    int X = 37359259;
    char *nula = NULL;
    
    // Casos básicos
    printf("1. Caracter (original): %c\n", c);
    ft_printf("1. Caracter (copia): %c\n", c);
    ft_printf("\n");
    
    printf("2. Cadena (original): %s\n", s);
    ft_printf("2. Cadena (copia): %s\n", s);
    ft_printf("\n");
    
    printf("3. Puntero (original): %p\n", p);
    ft_printf("3. Puntero (copia): %p\n", p);
    ft_printf("\n");
    
    printf("4. Entero (d) (original): %d\n", d);
    ft_printf("4. Entero (d) (copia): %d\n", d);
    ft_printf("\n");
    
    printf("5. Entero (i) (original): %i\n", i);
    ft_printf("5. Entero (i) (copia): %i\n", i);
    ft_printf("\n");
    
    printf("6. Unsigned (original): %u\n", u);
    ft_printf("6. Unsigned (copia): %u\n", u);
    ft_printf("\n");
    
    printf("7. Hexadecimal (x) (original): %x\n", x);
    ft_printf("7. Hexadecimal (x) (copia): %x\n", x);
    ft_printf("\n");
    
    printf("8. Hexadecimal (X) (original): %X\n", X);
    ft_printf("8. Hexadecimal (X) (copia): %X\n", X);
    ft_printf("\n");
    
    printf("9. Porcentaje (original): %%\n");
    ft_printf("9. Porcentaje (copia): %%\n");
    ft_printf("\n");

    // Casos especiales
    printf("10. Carácter nulo (original): %c\n", '\0');
    ft_printf("10. Carácter nulo (copia): %c\n", '\0');
    ft_printf("\n");
    
    printf("11. Cadena nula (original): %s\n", nula);
    ft_printf("11. Cadena nula (copia): %s\n", nula);
    ft_printf("\n");
    
    printf("12. Puntero nulo (original): %p\n", NULL);
    ft_printf("12. Puntero nulo (copia): %p\n", NULL);
    ft_printf("\n");
    
    printf("13. INT_MIN (original): %d\n", INT_MIN);
    ft_printf("13. INT_MIN (copia): %d\n", INT_MIN);
    ft_printf("\n");
    
    printf("14. INT_MAX (original): %d\n", INT_MAX);
    ft_printf("14. INT_MAX (copia): %d\n", INT_MAX);
    ft_printf("\n");
    
    printf("15. UINT_MAX (original): %u\n", UINT_MAX);
    ft_printf("15. UINT_MAX (copia): %u\n", UINT_MAX);
    ft_printf("\n");
    
    printf("16. Hexadecimal negativo (original): %x\n", -1);
    ft_printf("16. Hexadecimal negativo (copia): %x\n", -1);
    ft_printf("\n");
    
    printf("17. Entero 0 (original): %d\n", 0);
    ft_printf("17. Entero 0 (copia): %d\n", 0);
    ft_printf("\n");

    // Pruebas de múltiples argumentos
    printf("18. Múltiples valores (original): %d %s %x\n", 42, "test", 255);
    ft_printf("18. Múltiples valores (copia): %d %s %x\n", 42, "test", 255);
    ft_printf("\n");
    
    printf("19. Saltos de línea (original): %s\n", "Hola\nMundo");
    ft_printf("19. Saltos de línea (copia): %s\n", "Hola\nMundo");
    ft_printf("\n");

    printf("20. Hexadecimal con INT_MIN (original): %x\n", INT_MIN);
    ft_printf("20. Hexadecimal con INT_MIN (copia): %x\n", INT_MIN);
    ft_printf("\n");

    printf("21. Hexadecimal con INT_MAX (original): %x\n", INT_MAX);
    ft_printf("21. Hexadecimal con INT_MAX (copia): %x\n", INT_MAX);
    ft_printf("\n");

    printf("22. Triple porcentaje (original): %%%d%%\n", 42);
    ft_printf("22. Triple porcentaje (copia): %%%d%%\n", 42);
    ft_printf("\n");
    
    return 0;
}
