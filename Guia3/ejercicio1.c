/*1) Escribir un programa que lea una cadena de caracteres ingresada por el flujo de entrada estándar y la imprima
por pantalla. Para ello utilizar las funciones de biblioteca scanf() con formato "%s", gets() y fgets().
Comparar los resultados y explicar la conveniencia de utilizar cada una de ellas y en qué circunstancias.*/
#include<stdio.h>

int main(void)
{
    char strscan[10];
    char strgets[10];
    char strfget[10];

    /*puts("START\n");
    scanf("%s", strscan);
    printf("scanf():");
    printf(strscan);
    printf("\n");*/

    
    gets(strgets);
    printf("gets():");
    printf(strgets);
    printf("\n");
    
    
    /*
    fgets(strfget, 10, stdin);
    printf("fgets():");
    printf(strfget);
    */

    return 0;
}