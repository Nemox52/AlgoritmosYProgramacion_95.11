/*4) a) Definir un tipo de dato dato_t a partir del tipo nativo float (mediante el uso de typedef).
b) Definir un tipo enumerativo escala_t que contenga los símbolos CELSIUS y FAHRENHEIT.
c) Escribir un fragmento de código que lea del flujo de entrada estándar un número que represente un valor
de temperatura en una de las dos escalas y la convierta paramétricamente a la otra, mostrando el resultado
por el flujo de salida estándar.*/
#include <stdio.h>

typedef float dato_t;

enum escala {CELSIUS = 1, FAHRENHEIT = 2};
typedef enum escala escala_t;

float convertToCelcius(float temperatura);
float convertToFahrenheit(float temperatura);
int main()
{
    dato_t entrada, resultado;
    escala_t escala;
    int opcion;

    printf("Elija la escala del resultado.\n 1_CELCIUS\n 2_FAHRENHEIT\n");
    scanf("%d", &opcion);
    escala = opcion;
    if(escala == CELSIUS)
    {
        printf("Ingrese el valor de temperatura en Fahrenheit: \t");
        scanf("%f", &entrada);
        resultado = convertToCelcius(entrada);
    }
    else if(escala == FAHRENHEIT)
    {
        printf("Ingrese el valor de temperatura en Celcius: \t");
        scanf("%f", &entrada);
        resultado = convertToFahrenheit(entrada);
    }
    else
    {
        printf("Algo ha salido mal :(\n");
        return 0;
    }

    printf("El resultado es: %f\n", resultado);

    return 0;
}

float convertToCelcius(float temperatura)
{
    return ((temperatura - 32) * (5/9));
}
float convertToFahrenheit(float temperatura)
{
    return ((temperatura * 9/5) + 32);
}