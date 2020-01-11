/*2) Ídem 1 para un tipo enumerativo status_t compuesto por los símbolos ERROR y OK.*/


#include <stdio.h>


enum status { ERROR, OK };

typedef enum status status_t;

int main()
{
    status_t estado;
    estado = ERROR;

    if(estado == OK)
        fprintf(stdout, "OK");
    else if(estado == ERROR)
        fprintf(stdout, "ERROR");

    return 0;
}