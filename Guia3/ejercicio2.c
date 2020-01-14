/*2) Escribir un fragmento de código que determine si una cadena de caracteres está vacía o no, de dos formas
distintas. Utilizar el carácter NUL para una de ellas y la función de biblioteca strcmp() para la otra.*/
#include<stdio.h>
#include<string.h>

#define NULL_STRING ""

int main(void)
{
    char str[10] = "";
    int compareta;
    /*
    if(str[0] == '\0')
    {
        puts("Esta vacia.");
    }
    else
    {
        puts("No esta vacia.");
    }
    */
   compareta = strcmp(str, NULL_STRING);
   if(compareta > 0)
   {
        puts("No esta vacia.");
   }
   else
   {
        puts("Esta vacia.");
   }
   


    return 0;
}