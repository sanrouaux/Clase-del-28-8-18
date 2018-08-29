#include <stdio.h>
#include <stdlib.h>


int ingresarNumero (char[]);
int sumar(int, int);
int restar(int, int);
float dividir(int, int);
int multiplicar(int, int);
int sacarFactorial(int);
void imprimirResultado (char[], int);
void imprimirResultadoDivision (char[], float);


int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;
    int resultado;
    float resultadoDivision;


    do
    {
        numeroUno = ingresarNumero("Ingrese el primer numero: ");
        numeroDos = ingresarNumero("Ingrese el segundo numero: ");

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
            imprimirResultado("El resultado de la suma es %d\n", resultado);
            break;

        case 2:
            resultado = restar(numeroUno, numeroDos);
            imprimirResultado("El resultado de la resta es %d\n", resultado);
            break;

        case 3:
            if(numeroDos == 0)
            {
                printf("No es posible dividir por cero\n");
            }
            else
            {
                resultadoDivision = dividir(numeroUno, numeroDos);
                imprimirResultadoDivision("El resultado de la division es %d\n", resultado);
            }
            break;

        case 4:
            resultado = multiplicar(numeroUno, numeroDos);
            imprimirResultado("El resultado de la multiplicacion es %d\n", resultado);
            break;

        case 5:
            resultado = sacarFactorial(numeroUno);
            imprimirResultado("El factorial del primer numero es %d\n", resultado);
            resultado = sacarFactorial(numeroDos);
            imprimirResultado("El factorial del segundo numero es %d\n", resultado);
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


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int ingresarNumero(char texto[])
{
    int numero;
    printf("%s", texto);
    scanf("%d",&numero);
    return numero;
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int sumar(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno + numeroDos;
    return resultado;
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int restar(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno - numeroDos;
    return resultado;
}


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

float dividir(int numeroUno, int numeroDos)
{
    float resultado;
    resultado = (float)numeroUno / (float)numeroDos;
    return resultado;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int multiplicar(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno * numeroDos;
    return resultado;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int sacarFactorial(int numero)
{
    int resultado;
    if(numero == 1)
    {
        return 1;
    }
    else
    {
        resultado = numero * sacarFactorial(numero-1);
        return resultado;
    }
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

void imprimirResultado(char texto[], int resultado)
{
    printf(texto, resultado);
}

void imprimirResultadoDivision(char texto[], float resultado)
{
    printf(texto, resultado);
}
