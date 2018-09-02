#include <stdio.h>
#include <stdlib.h>


int ingresarNumero (void);
int desplegarMenu (int, int);
int sumar(int, int);
int restar(int, int);
float dividir(int, int);
int multiplicar(int, int);
int sacarFactorial(int);
void imprimirResultado (float);


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


/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int ingresarNumero(void)
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    printf("\n");
    return numero;
}

/** \brief
 *
 * \param
 * \param
 * \return
 *
 */

int desplegarMenu (int numeroUno, int numeroDos)
{
    int opcion;
    printf("Que accion desea ralizar?");
    printf("\n1. Calcular la suma de %d y %d", numeroUno, numeroDos);
    printf("\n2. Calcular la resta de %d y %d", numeroUno, numeroDos);
    printf("\n3. Calcular la division entre %d y %d", numeroUno, numeroDos);
    printf("\n4. Calcular la multiplicacion entre %d y %d", numeroUno, numeroDos);
    printf("\n5. Calcular el factorial de %d y de %d", numeroUno, numeroDos);
    printf("\n6. Salir");
    printf("\nIngrese una opcion: ");
    scanf("%d", &opcion);
    return opcion;
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

void imprimirResultado(float resultado)
{
    printf("\nEl resultado es: %.2f \n", resultado);
}
