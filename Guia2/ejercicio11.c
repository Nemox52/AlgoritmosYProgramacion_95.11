/*11) ¿Qué modificaciones se deberían realizar en el programa anterior si en vez de ingresar el código, si se quisiera
ingresar los símbolos “3”, “M”, “S” y “V” respectivamente?
*/
#include <stdio.h>
#include <conio.h>
enum manufacturer { TRESM_CORPORATION = 51,
                    MAXWELL_CORPORATION = 109,
                    SONY_CORPORATION = 115,
                    VERBATIM_CORPORATION = 118 };


#define ERROR_MESSAGE "Codigo incorrecto"
#define TRESM_NAME "3M Corporation"
#define MAXWELL_NAME "Maxell Corporation"
#define SONY_NAME "Sony Corporation"
#define VERBATIM_NAME "Verbatim Corporation"

int main(void)
{
    char codigo;
    char * text;
    printf("\nIngrese el codigo:\t");
    codigo = getchar();
    
    switch (codigo)
    {
    case TRESM_CORPORATION:
        text = TRESM_NAME;
        break;
    case MAXWELL_CORPORATION:
        text = MAXWELL_NAME;
        break;
    case SONY_CORPORATION:
        text = SONY_NAME;
        break;
    case VERBATIM_CORPORATION:
        text = VERBATIM_NAME;
        break;
    default:
        text = ERROR_MESSAGE;
        break;
    }
    puts(text);

    return 0;
}


