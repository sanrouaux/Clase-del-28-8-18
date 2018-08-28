#include <stdio.h>
#include <stdlib.h>

int sumar(int, int);
int restar(int, int);
int dividir(int, int);
int multiplicar(int, int);
int sacarFactorial(int, int);


int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    int resultado;

    do
    {
        printf("Ingrese el primer numero: ");
        scanf("%d", &numeroUno);

        printf("\nIngrese el segundo numero: ");
        scanf("%d", &numeroDos);

        printf("\nQue accion desea ralizar?");
        printf("\n1. Calcular la suma de %d y %d", numeroUno, numeroDos);
        printf("\n2. Calcular la resta de %d y %d", numeroUno, numeroDos);
        printf("\n3. Calcular la division entre %d y %d", numeroUno, numeroDos);
        printf("\n4. Calcular la multiplicacion entre %d y %d", numeroUno, numeroDos);
        printf("\n5. Calcular el factorial de %d y de %d", numeroUno, numeroDos);
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);


        switch(opcion)
        {
        case 1:
            resultado = sumar(numeroUno, numeroDos);
            printf("\nEl resultado de %d+%d es: %d\n", numeroUno, numeroDos, resultado);
            break;

        case 2:
            resultado = restar(numeroUno, numeroDos);
            printf("\nEl resultado de %d-%d es: %d\n", numeroUno, numeroDos, resultado);
            break;

        case 3:
            if(numeroDos == 0){
                printf("\nNo es posible dividir por cero\n");
            } else {
                resultado = dividir(numeroUno, numeroDos);
                printf("\nEl resultado de %d/%d es: %d\n", numeroUno, numeroDos, resultado);
            }
            break;

        case 4:
            resultado = multiplicar(numeroUno, numeroDos);
            printf("\nEl resultado de %d*%d es: %d\n", numeroUno, numeroDos, resultado);
            break;

        case 5:
            break;

        default:
            printf("No ingresó una opción correcta");

        }

        system("pause");
        system("cls");

    }
    while(opcion != 5);

    return 0;
}


int sumar(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno + numeroDos;
    return resultado;
}

int restar(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno - numeroDos;
    return resultado;
}

int dividir(int numeroUno, int numeroDos)
{
    float resultado;
    resultado = numeroUno / numeroDos;
    return resultado;
}

int multiplicar(int numeroUno, int numeroDos)
{

}

int sacarFactorial(int numeroUno, int numeroDos)
{

}
