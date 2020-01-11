/*6) Escribir un programa que lea un texto desde el teclado y calcule la cantidad de caracteres alfanuméricos, no
alfanuméricos y numéricos que se ingresan. El programa debe informar esos valores por pantalla.
Sugerencia: usar las funciones de biblioteca isalnum(int caracter), isalpha(int caracter) e
isdigit(int carácter).*/
#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[50];
    int i = 0;
    int alfanum = 0;
    int alfa = 0;
    int num = 0;

    printf("\nIngrese un texto:\n");
    fgets(str, 50, stdin);
    while (str[i] != '\n')
    {
        if(isalnum(str[i])) alfanum++;
        i++;
    }
    i = 0;
    while(str[i] != '\n')
    {
        if(isalpha(str[i])) alfa++;
        i++;
    }
    i = 0;
    while(str[i] != '\n')
    {
        if(isdigit(str[i])) num++;
        i++;
    }
    printf("El texto tiene %i caracteres alfanumericos.\n", alfanum);
    printf("El texto tiene %i caracteres alfabeticos.\n", alfa);
    printf("El texto tiene %i caracteres numericos.\n", num);

    return 0;
}