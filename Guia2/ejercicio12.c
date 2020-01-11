/*12) Indicar si el siguiente fragmento de código es correcto o no. Justificar.*/


#include<stdio.h>

typedef enum { CORRECTO, 
               INCORRECTO } resultado_t;

int main(void)
{
    int x;
    resultado_t proceso = CORRECTO;
    if (proceso == CORRECTO) x = 1;
    else x = -1; /* proceso incorrecto */

    return 0;
}