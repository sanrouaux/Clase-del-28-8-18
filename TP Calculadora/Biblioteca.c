#include <stdio.h>
#include <stdlib.h>

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

