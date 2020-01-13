/*18) ¿Cómo se puede parametrizar el código del ejercicio 5), de forma de poder permitir varios idiomas? (usar
directivas al preprocesador).*/

#include <stdio.h>

typedef enum { ENGLISH = 0,
               SPANISH = 1,
               GERMAN = 2 } language_t;

#define LANGUAGE SPANISH 

#if LANGUAGE == 2
    #define STR_MESSAGE "Geben Sie die Zahl ein, die einem Monat entspricht:"
    #define STR_ERROR_MESSAGE "Falscher Eintrag."

    #define STR_JANUARY "Januar"
    #define STR_FEBRUARY "Februar"
    #define STR_MARCH "März"
    #define STR_APRIL "April"
    #define STR_MAY "Mai"
    #define STR_JUNE "Juni"
    #define STR_JULY "Juli"
    #define STR_AUGUST "August"
    #define STR_SEPTEMBER "Sptember"
    #define STR_OCTOBER "Oktober"
    #define STR_NOVEMBER "November"
    #define STR_DECEMBER "Dezember"
#elif LANGUAGE == 1
    #define STR_MESSAGE "Ingrese el numero correspondiente a un mes:"
    #define STR_ERROR_MESSAGE "Entrada erronea."

    #define STR_JANUARY "Enero"
    #define STR_FEBRUARY "Febrero"
    #define STR_MARCH "Marzo"
    #define STR_APRIL "Abril"
    #define STR_MAY "Mayo"
    #define STR_JUNE "Junio"
    #define STR_JULY "Julio"
    #define STR_AUGUST "Agosto"
    #define STR_SEPTEMBER "Septiembre"
    #define STR_OCTOBER "Octubre"
    #define STR_NOVEMBER "Noviembre"
    #define STR_DECEMBER "Diciembre"
#elif LANGUAGE == 0
    #define STR_MESSAGE "Enter the number corresponding to one month:"
    #define STR_ERROR_MESSAGE "Wrong entry."

    #define STR_JANUARY "January"
    #define STR_FEBRUARY "February"
    #define STR_MARCH "March"
    #define STR_APRIL "April"
    #define STR_MAY "May"
    #define STR_JUNE "June"
    #define STR_JULY "July"
    #define STR_AUGUST "August"
    #define STR_SEPTEMBER "Sptember"
    #define STR_OCTOBER "October"
    #define STR_NOVEMBER "November"
    #define STR_DECEMBER "December"
#endif

typedef enum { JANUARY = 1, 
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
               DECEMBER = 12 } month_t;

int main()
{
    month_t month;
    int input;
    printf(STR_MESSAGE);
    printf("\t");
    scanf("%d", &input);
    month = input;

    switch (month)
    {
    case JANUARY:
        printf(STR_JANUARY);
        break;
    case FEBRUARY:
        printf(STR_FEBRUARY);
        break;
    case MARCH:
        printf(STR_MARCH);
        break;
    case APRIL:
        printf(STR_APRIL);
        break;
    case MAY:
        printf(STR_MAY);
        break;
    case JUNE:
        printf(STR_JUNE);
        break;
    case JULY:
        printf(STR_JULY);
        break;
    case AUGUST:
        printf(STR_AUGUST);
        break;
    case SEPTEMBER:
        printf(STR_SEPTEMBER);
        break;
    case OCTOBER:
        printf(STR_OCTOBER);
        break;
    case NOVEMBER:
        printf(STR_NOVEMBER);
        break;
    case DECEMBER:
        printf(STR_DECEMBER);
        break;    
    default:
        puts(STR_ERROR_MESSAGE);
        break;
    }

    return 0;
}