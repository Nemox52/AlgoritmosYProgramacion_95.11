/*10) Cada unidad de disco de un cargamento está marcada con un código del 1 al 4 que indica un
fabricante:
Código de fabricante              Denominación
  (manufacturer id)                 (naming)
        1                       3M Corporation
        2                       Maxell Corporation
        3                       Sony Corporation
        4                       Verbatim Corporation
Escribir un programa que acepte el número de código como dato de entrada y despliegue el nombre correcto del
fabricante con base en el valor introducido (usar tipos enumerativos y constantes simbólicas para la modelización).
*/
#include <stdio.h>
#include <conio.h>
enum manufacturer { TRESM_CORPORATION = 1,
                    MAXWELL_CORPORATION = 2,
                    SONY_CORPORATION = 3,
                    VERBATIM_CORPORATION = 4 };


#define ERROR_MESSAGE "Codigo incorrecto"
#define TRESM_NAME "3M Corporation"
#define MAXWELL_NAME "Maxell Corporation"
#define SONY_NAME "Sony Corporation"
#define VERBATIM_NAME "Verbatim Corporation"

int main(void)
{
    int codigo;
    char * text;
    printf("\nIngrese el codigo:\t");
    scanf("%d", &codigo);
    
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