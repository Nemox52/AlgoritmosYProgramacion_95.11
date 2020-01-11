/*1) a) Escribir un programa que defina un tipo enumerativo con los símbolos TRUE y FALSE.
b) Redefinir este tipo enumerativo como tipo bool_t.
c) Declarar una variable de tipo bool_t y asignarle el símbolo TRUE.
d) Escribir una porción de código que imprima por stdout una cadena de caracteres según el valor de la
variable anterior (traducción semántica).*/

#include <stdio.h>


enum boolean { TRUE, FALSE };

typedef enum boolean bool_t;

int main()
{
    bool_t estado;
    estado = FALSE;

    if(estado == TRUE)
        fprintf(stdout, "TRUE");
    else if(estado == FALSE)
        fprintf(stdout, "FALSE");

    return 0;
}