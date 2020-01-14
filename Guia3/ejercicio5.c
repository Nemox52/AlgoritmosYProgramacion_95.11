/*5) Escribir un programa que dada una cadena de caracteres, calcule su longitud y la imprima por pantalla
(equivalente a la función de biblioteca strlen(), encabezado <string.h>).*/
#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] = "";
    size_t i = 0; 

    while (str[i] != '\0')
    {
        i++;
    }
    
    printf("%d", i);
    putchar('\n');
    printf("%d", strlen(str));

    return 0;
}