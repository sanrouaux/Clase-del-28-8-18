#include <stdio.h>
#include <stdlib.h>
#include "miLibreria.h"


int main()
{
    int opcion;
    float numeroUno;
    float numeroDos;
    float resultadoSuma;
    float resultadoResta;
    float resultadoDivision;
    float resultadoMultiplicacion;
    long int resultadoFactorialUno;
    long int resultadoFactorialDos;
    int bandera1 = 0;
    int bandera2 = 0;
    int bandera3 = 0;


    do
    {
        printf("----------CALCULADORA-------------\n");
        printf("--------------MENU----------------\n");
        printf("1. Ingresar primer operando (A=%.2f)\n", numeroUno);
        printf("2. Ingresar segundo operando (B=%.2f)\n", numeroDos);
        printf("3. Calcular todas las operaciones\n");
        printf("4. Informar resultados\n");
        printf("5. Salir\n");
        printf("----------------------------------\n");
        printf("%cQu%c acci%cn desea realizar?\n",168,130,162);
        printf("Ingrese un n%cmero: ",163);
        scanf("%d", &opcion);
        printf("\n");


        switch(opcion)
        {
        case 1:
            numeroUno = ingresarNumero("Ingrese el primer operando: ");
            bandera1 = 1;
            printf("\nHas ingresado el %.2f\n\n", numeroUno);
            system("pause");
            break;

        case 2:
            if(bandera1 == 0)
            {
                printf("Error. A%cn debe ingresar el primer operando. Seleccione la opci%cn 1\n\n",163,162);
                system("pause");
            }
            else
            {
                numeroDos = ingresarNumero("Ingrese el segundo operando: ");
                bandera2 = 1;
                printf("\nHas ingresado el %.2f\n\n", numeroDos);
                system("pause");
            }
            break;

        case 3:
            if(bandera2 == 0)
            {
                printf("Error. A%cn no ingres%c todos los operandos. Seleccione la opci%cn 1/2\n\n",163,162,162);
            }
            else
            {
                resultadoSuma = sumar(numeroUno, numeroDos);
                resultadoResta = restar(numeroUno, numeroDos);
                if(numeroDos != 0)
                {
                    resultadoDivision = dividir(numeroUno, numeroDos);
                }
                resultadoMultiplicacion = multiplicar(numeroUno, numeroDos);
                if(numeroUno >= 0 && esDecimal(numeroUno) == 0)
                {
                    resultadoFactorialUno = calcularFactorial(numeroUno);
                }
                if(numeroDos >= 0 && esDecimal(numeroDos) == 0)
                {
                    resultadoFactorialDos = calcularFactorial(numeroDos);
                }
                bandera3 = 1;
                printf("Todas las operaciones fueron realizadas... \n\n");
            }
            system("pause");
            break;

        case 4:
            if(bandera3 == 0)
            {
                printf("Error. A%cn no se realizaron las operaciones. Seleccione la opci%cn 3\n\n",163,162);
            }
            else
            {
                system("cls");
                printf("RESULTADOS:\n");
                printf("El resultado de %.2f + %.2f es: %.2f", numeroUno, numeroDos, resultadoSuma);
                printf("\nEl resultado de %.2f - %.2f es: %.2f", numeroUno, numeroDos, resultadoResta);
                if(numeroDos != 0)
                {
                    printf("\nEl resultado de %.2f / %.2f es: %.2f", numeroUno, numeroDos, resultadoDivision);
                }
                else
                {
                    printf("\nNo es posible hacer %.2f / %.2f", numeroUno, numeroDos);
                }
                printf("\nEl resultado de %.2f * %.2f es: %.2f", numeroUno, numeroDos, resultadoMultiplicacion);
                if(numeroUno >= 0 && esDecimal(numeroUno) == 0)
                {
                    printf("\nEl factorial de %.2f es: %ld", numeroUno, resultadoFactorialUno);
                }
                else
                {
                    printf("\nNo se puede calcular el factorial de %.2f", numeroUno);
                }
                if(numeroDos >= 0 && esDecimal(numeroDos) == 0)
                {
                    printf(" y el factorial de %.2f es: %ld\n\n", numeroDos, resultadoFactorialDos);
                }
                else
                {
                    printf(" y no se puede calcular el factorial de %.2f\n\n", numeroDos);
                }

                resultadoSuma = 0;
                resultadoResta = 0;
                resultadoDivision = 0;
                resultadoMultiplicacion = 0;
                resultadoFactorialUno = 0;
                resultadoFactorialDos = 0;
                numeroUno = 0;
                numeroDos = 0;
            }
            system("pause");
            break;

        case 5:
            printf("GRACIAS POR UTILIZAR LA CALCULADORA. HASTA PRONTO!\n\n");
            system("pause");
            break;

        default:
            printf("No ingres%c una opci%cn v%clida\n",162,162,160);
            system("pause");

        }

        system("cls");

    }
    while(opcion != 5);

    return 0;

}



