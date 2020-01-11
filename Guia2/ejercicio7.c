/*7) Un ángulo se considera agudo si es menor que 90 grados, obtuso si es mayor que 90 grados y recto si es igual a
90 grados. Escribir un programa que acepte un ángulo y muestre el tipo de ángulo correspondiente al valor
introducido en grados. Usar tipos enumerativos para manejar los tres tipos de ángulo.*/
#include <stdio.h>
enum angulos {AGUDO = 89, OBTUSO = 91, RECTO = 90};
typedef enum angulos angulo_t;
int main()
{
    int angulo;

    printf("\nIngrese un angulo:\t");
    scanf("%d", &angulo);
    if(angulo > 360) printf("Valor incorrecto\n");
    else if(angulo <= AGUDO) printf("El angulo es agudo.\n");
    else if(angulo >= OBTUSO) printf("El angulo es obtuso.\n");
    else if(angulo >= RECTO) printf("El angulo es recto.\n");
    
    return 0;
}