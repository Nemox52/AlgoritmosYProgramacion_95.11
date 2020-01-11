/*14) 
a) Un dispositivo de comunicaciones puede utilizar una velocidad de transferencia de 1200, 2400, 4800, y 9600
baudios. Definir un tipo enumerativo para modelizar dicha situación.
b) ¿Conviene utilizar un prefijo para los tokens del tipo enumerativo? ¿Por qué?*/
#include<stdio.h>

typedef enum { V1 = 1200,
               V2 = 2400,
               V3 = 4800,
               V5 = 9600 } baudio_t;

int main(void)
{
    

    return 0;
}