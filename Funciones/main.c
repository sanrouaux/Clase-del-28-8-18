#include <stdio.h>
#include <stdlib.h>

/*
1) Declaracion de la función: prototipo o firma de la función
2) LLamado de la función
3) Desarrollo de la función

En 1, tengo que pensar: queDevuelve, comoSeLlama, (queRecibe)

*/

void sumar1 (void); // prototipo de la funcion sumar1. Se escribe arriba del main
void sumar2 (int, int); // prototipo de la funcion sumar2. Los nombres de las variables pueden estar o no estar
int sumar3 (void); // Prototipo de la función sumar3


int main()
{
    sumar1(); //Llamado de sumar1

    system("pause");

    int numeroUno;
    int numeroDos;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    sumar2(numeroUno, numeroDos); // Llamado de sumar2; numeroUno y numeroDos son los parámetros formales

    system("pause");

    int suma;
    suma = sumar3(); // Llamado de sumar3
    printf("El resultado es %d", suma);





    return 0;
}


void sumar1 (void)    // implementación de la función. Se escribe debajo del main

{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    printf("El resultado es %d \n", suma);
}


void sumar2(int n1, int n2) // Implementación de sumar2. n1 y n2 son los parámetros formales
{
    int suma;
    suma = n1 + n2;
    printf("El resultado es %d \n",suma);

}

int sumar3 (void)
{
    int numeroUno;
    int numeroDos;
    int suma;

    printf("Ingrese el primer numero: ");
    scanf("%d", &numeroUno);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);

    suma = numeroUno + numeroDos;

    return suma;

}
