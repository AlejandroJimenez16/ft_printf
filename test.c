/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejandj <alejandj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:24:09 by alejandj          #+#    #+#             */
/*   Updated: 2025/02/18 12:15:21 by alejandj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main() {
    
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
    printf("1. Caracter (original): %c", c);
    ft_printf("1. Caracter (copia): %c", c);
    printf("\n");
    
    printf("2. Cadena (original): %s", s);
    ft_printf("2. Cadena (copia): %s", s);
    printf("\n");
    
    printf("3. Puntero (original): %p", p);
    ft_printf("3. Puntero (copia): %p", p);
    printf("\n");
    
    printf("4. Entero (d) (original): %d", d);
    ft_printf("4. Entero (d) (copia): %d", d);
    printf("\n");
    
    printf("5. Entero (i) (original): %i", i);
    ft_printf("5. Entero (i) (copia): %i", i);
    printf("\n");
    
    printf("6. Unsigned (original): %u", u);
    ft_printf("6. Unsigned (copia): %u", u);
    printf("\n");
    
    printf("7. Hexadecimal (x) (original): %x", x);
    ft_printf("7. Hexadecimal (x) (copia): %x", x);
    ft_printf("\n");
    
    printf("8. Hexadecimal (X) (original): %X", X);
    ft_printf("8. Hexadecimal (X) (copia): %X", X);
    ft_printf("\n");
    
    printf("9. Porcentaje (original): %%");
    ft_printf("9. Porcentaje (copia): %%");
    ft_printf("\n");

    // Casos especiales
    printf("10. Carácter nulo (original): %c", '\0');
    ft_printf("10. Carácter nulo (copia): %c", '\0');
    ft_printf("\n");
    
    printf("11. Cadena nula (original): %s", nula);
    ft_printf("11. Cadena nula (copia): %s", nula);
    ft_printf("\n");
    
    printf("12. Puntero nulo (original): %p", NULL);
    ft_printf("12. Puntero nulo (copia): %p", NULL);
    ft_printf("\n");
    
    printf("13. INT_MIN (original): %d", INT_MIN);
    ft_printf("13. INT_MIN (copia): %d", INT_MIN);
    ft_printf("\n");
    
    printf("14. INT_MAX (original): %d", INT_MAX);
    ft_printf("14. INT_MAX (copia): %d", INT_MAX);
    ft_printf("\n");
    
    printf("15. UINT_MAX (original): %u", UINT_MAX);
    ft_printf("15. UINT_MAX (copia): %u", UINT_MAX);
    ft_printf("\n");
    
    printf("16. Hexadecimal negativo (original): %x", -1);
    ft_printf("16. Hexadecimal negativo (copia): %x", -1);
    ft_printf("\n");
    
    printf("17. Entero 0 (original): %d", 0);
    ft_printf("17. Entero 0 (copia): %d", 0);
    ft_printf("\n");

    // Flags y formatos avanzados
    printf("18. Flag más (original): %+d", 42);
    ft_printf("18. Flag más (copia): %+d", 42);
    ft_printf("\n");
    
    printf("19. Flag espacio (original): % d", 42);
    ft_printf("19. Flag espacio (copia): % d", 42);
    ft_printf("\n");
    
    printf("20. Flag cero con ancho (original): %010d", 42);
    ft_printf("20. Flag cero con ancho (copia): %010d", 42);
    ft_printf("\n");
    
    printf("21. Ancho y precisión (original): %10.5d", 42);
    ft_printf("21. Ancho y precisión (copia): %10.5d", 42);
    ft_printf("\n");
    
    printf("22. Truncado de string (original): %.3s", "abcdef");
    ft_printf("22. Truncado de string (copia): %.3s", "abcdef");
    ft_printf("\n");

    // Pruebas de múltiples argumentos
    printf("23. Múltiples valores (original): %d %s %x", 42, "test", 255);
    ft_printf("23. Múltiples valores (copia): %d %s %x", 42, "test", 255);
    ft_printf("\n");
    
    printf("24. Saltos de línea (original): %s", "Hola\nMundo");
    ft_printf("24. Saltos de línea (copia): %s", "Hola\nMundo");
    ft_printf("\n");
    
    printf("25. Tabulación (original): %s", "Hola\tMundo");
    ft_printf("25. Tabulación (copia): %s", "Hola\tMundo");
    
    return 0;
}
