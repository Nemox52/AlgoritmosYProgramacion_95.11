/*5) a) Definir un tipo enumerativo mes_t con 12 símbolos que representen cada uno de los meses del año.
b) Escribir un fragmento de código que a partir del contenido de una variable de tipo mes_t, imprima por pantalla
la descripción del mes (traducción).*/
#include <stdio.h>

enum months {JANUARY = 1, 
             FEBRUARY = 2, 
             MARCH = 3, 
             APRIL = 4, 
             MAY = 5, 
             JUNE = 6, 
             JULY = 7, 
             AUGUST = 8, 
             SEPTEMBER = 9, 
             OCTOBER = 10, 
             NOVEMBER = 11, 
             DECEMBER = 12};
typedef enum months month_t;

int main()
{
    month_t month;
    int input;
    printf("Ingrese el numero correspondiente a un mes:\t");
    scanf("%d", &input);
    month = input;
    switch (month)
    {
    case JANUARY:
        printf("Enero");
        break;
    case FEBRUARY:
        printf("Febrero");
        break;
    case MARCH:
        printf("Marzo");
        break;
    case APRIL:
        printf("Abril");
        break;
    case MAY:
        printf("Mayo");
        break;
    case JUNE:
        printf("Junio");
        break;
    case JULY:
        printf("Julio");
        break;
    case AUGUST:
        printf("Agosto");
        break;
    case SEPTEMBER:
        printf("September");
        break;
    case OCTOBER:
        printf("Octubre");
        break;
    case NOVEMBER:
        printf("Noviembre");
        break;
    case DECEMBER:
        printf("Diciembre");
        break;    
    default:
        printf("Entrada erronea.\n");
        break;
    }

    return 0;
}