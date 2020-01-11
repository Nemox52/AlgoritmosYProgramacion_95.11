/*9) ¿Qué le modificaría al programa anterior si quisiera utilizarlo para la carrera de Ingeniería Mecánica, que requiere
260 créditos y no 240 (es decir, 52 créditos por año) para alcanzar el título de grado?*/

/*8) El nivel de grado de los alumnos que no han terminado los estudios en una universidad se determina mediante
la siguiente tabla:

Número de créditos                Grado
    < 48                        Primer año
    48 a 95                     Segundo año
    96 a 143                    Tercer año
    > 144                       Cuarto año

Con esta información, escribir un programa que acepte el número de créditos que ha acumulado un
alumno y determine en qué grado se encuentra, mostrando los resultados por pantalla.*/
#include<stdio.h>
enum grado { PRIMER, 
             SEGUNDO, 
             TERCER, 
             CUARTO };

typedef enum grado grado_t;

int main(void)
{
    int credito;
    grado_t grado;

    printf("\nIngrese la cantidad de creditos del alumno:\t");
    scanf("%d", &credito);

    if(credito < 48)
    {
        grado = PRIMER;
    }
    else if (credito >= 48 && credito <= 95)
    {
        grado = SEGUNDO;
    }
    else if (credito >= 96 && credito <= 143)
    {
        grado = TERCER;
    }
    else if (credito > 144)
    {
        grado = CUARTO;
    }
    else
    {
        printf("La cagaste\n");
        return 0;
    }
    
    
    switch (grado)
    {
    case PRIMER:
        printf("\nEl alumno se encuentra en primer a%co.\n", 164);
        break;
    case SEGUNDO:
        printf("\nEl alumno se encuentra en segundo a%co.\n", 164);
        break;
    case TERCER:
        printf("\nEl alumno se encuentra en tercer a%co.\n", 164);
        break;
    case CUARTO:
        printf("\nEl alumno se encuentra en cuarto a%co.\n", 164);
        break;
    
    default:
        printf("La cagaste\n");
        break;
    }

    return 0;
}