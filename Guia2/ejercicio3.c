/*3) a) Definir un tipo enumerativo dia_t compuesto por 7 símbolos que representen cada día de la semana.
b) Escribir una porción de código que muestre por stdout el contenido de una variable de tipo dia_t (traducción).*/

#include <stdio.h>

enum days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

typedef enum days day_t;

int main()
{
    day_t day;

    day = 89;

    switch (day)
    {
    case 0:
        fprintf(stdout, "Domingo\n");
        break;
    case 1:
        fprintf(stdout, "Lunes\n");
        break;
    case 2:
        fprintf(stdout, "Martes\n");
        break;
    case 3:
        fprintf(stdout, "Mi%crcoles\n",130);
        break;
    case 4:
        fprintf(stdout, "Jueves\n");
        break;
    case 5:
        fprintf(stdout, "Viernes\n");
        break;
    case 6:
        fprintf(stdout, "S%cbado\n",160);
        break;
    
    default:
        fprintf(stdout, "Feriado\n");
        break;
    }

    return 0;
}