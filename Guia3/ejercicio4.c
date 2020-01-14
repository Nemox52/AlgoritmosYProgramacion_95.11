/*4) Escribir un programa que inicialice arreglo de caracteres con una cadena cualquiera y lo imprima en orden
inverso por el flujo de salida estándar.*/
#include<stdio.h>

int main(void)
{
    char entrada[6] = "1234";
    char salida[6] = "abc";
    size_t i = 0;
    size_t j = 3;

    while (entrada[i] != '\0')
    {
        salida[i] = entrada[j];
        i++;
        j--;
    }
    putchar('\n');
    
    printf("entrada 1:%s",entrada);
    putchar('\n');
    printf("salida  2:%s",salida);
    putchar('\n');
    return 0;
}
