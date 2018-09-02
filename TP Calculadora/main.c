#include <stdio.h>
#include <stdlib.h>
#include "miLibreria.h"


int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    float resultado;


    do
    {
        numeroUno = ingresarNumero();
        numeroDos = ingresarNumero();


        opcion = desplegarMenu(numeroUno, numeroDos);


        switch(opcion)
        {
        case 1:
            resultado = sumar(numeroUno, numeroDos);
            imprimirResultado(resultado);
            break;

        case 2:
            resultado = restar(numeroUno, numeroDos);
            imprimirResultado(resultado);
            break;

        case 3:
            if(numeroDos == 0)
            {
                printf("No es posible dividir por cero\n");
            }
            else
            {

                resultado = dividir(numeroUno, numeroDos);
                imprimirResultado(resultado);
            }
            break;

        case 4:
            resultado = multiplicar(numeroUno, numeroDos);
            imprimirResultado(resultado);
            break;

        case 5:
            resultado = sacarFactorial(numeroUno);
            imprimirResultado(resultado);
            resultado = sacarFactorial(numeroDos);
            imprimirResultado(resultado);
            break;

        case 6:
            break;

        default:
            printf("Ingrese una opcion correcta");

        }

        system("pause");
        system("cls");

    }
    while(opcion != 6);

    return 0;
}



