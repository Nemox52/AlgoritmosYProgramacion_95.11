/*17) Definir un token DEBUG y escribir un fragmento de código que sea compilado (o no) dependiendo de si se está
en modo DEBUGing o en modo productivo. ¿Para qué puede servir esta construcción?*/
#include<stdio.h>

#define DEBUG 1

#if DEBUG == 1

    int main(void)
    {
        printf("Modo debug");
        return 0;
    }

#else 

    int main(void)
    {
        printf("Modo Normal");
        return 0;
    }

#endif