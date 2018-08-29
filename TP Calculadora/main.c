#include <stdio.h>
#include <stdlib.h>


int ingresarNumero (void);
int sumar(int, int);
int restar(int, int);
int dividir(int, int);
int multiplicar(int, int);
int sacarFactorial(int, int);
void imprimirResultado (int);


int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    int resultado;


    do
    {
        numeroUno = ingresarNumero();
        numeroDos = ingresarNumero();

        printf("\nQue accion desea ralizar?");
        printf("\n1. Calcular la suma de %d y %d", numeroUno, numeroDos);
        printf("\n2. Calcular la resta de %d y %d", numeroUno, numeroDos);
        printf("\n3. Calcular la division entre %d y %d", numeroUno, numeroDos);
        printf("\n4. Calcular la multiplicacion entre %d y %d", numeroUno, numeroDos);
        printf("\n5. Calcular el factorial de %d y de %d", numeroUno, numeroDos);
        printf("\n6. Salir");
        printf("\nIngrese una opcion: ");
        scanf("%d", &opcion);


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
                printf("\nNo es posible dividir por cero\n");
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
            //factorial

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


int ingresarNumero(void)
{
    int numero;
    printf("\nIngrese un numero: ");
    scanf("%d",&numero);
    return numero;
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
    int resultado;
    resultado = numeroUno / numeroDos;
    return resultado;
}

int multiplicar(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno * numeroDos;
    return resultado;
}

int sacarFactorial(int numeroUno, int numeroDos)
{

}

void imprimirResultado(int resultado)
{
    printf("El resultado es %d \n",resultado);
}
