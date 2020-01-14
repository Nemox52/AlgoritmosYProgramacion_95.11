/*4) Escribir un programa que inicialice arreglo de caracteres con una cadena cualquiera y lo imprima en orden
inverso por el flujo de salida estándar.*/
#include<stdio.h>

int main(void)
{
    char entrada[17] = "anitalavalatina.";
    char salida[17] = "";
    size_t i = 0;
    size_t j = 15;

    while (entrada[i] != '\0')
    {
        salida[i] = entrada[j];
        i++;
        j--;
    }
    putchar('\n');
    printf("entrada:%s",entrada);
    putchar('\n');
    printf("salida :%s",salida);
    putchar('\n');
    return 0;
}
