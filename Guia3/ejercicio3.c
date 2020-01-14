/*3) Escribir un fragmento de código que inicialice un arreglo de caracteres con una cadena cualquiera y la imprima
por el flujo de salida estándar.*/
#include<stdio.h>

int main(void)
{
    char str[] = "hola :)";
    fprintf(stdout, "%s", str);
    return 0;
}