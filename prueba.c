#include <string.h>

#include "ft_printf.h"

/*
int main(void)
{
    char *str = "Hola no se que poner";

    int result = printf("%s\n", str);
    int size = strlen(str);

    printf("Tamaño: %d\n", result);
    printf("Tamaño: %d\n", size);
}
*/

int main(void)
{
    int a = 1;
    void *p;

    p = &a;

    printf("%p", p);
}