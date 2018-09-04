#include <stdio.h>
#include <stdlib.h>
#include "miLibreria.h"


/** \brief pide un número al usuario y lo retorna
 *
 * \param mensaje[] char mensaje que será mostrado al usuario
 * \return int número entero ingresado por el usuario
 *
 */
float ingresarNumero(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);
    return numero;
}


/** \brief realiza la suma de dos números enteros
 *
 * \param numeroUno int primer operando de la suma
 * \param numeroDos int segundo operando de la suma
 * \return int resultado de la suma
 *
 */
float sumar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno + numeroDos;
    return resultado;
}


/** \brief realiza una resta entre dos números enteros
 *
 * \param numeroUno int primer operando de la resta
 * \param numeroDos int segundo operando de la resta
 * \return int resultado de la resta
 *
 */
float restar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno - numeroDos;
    return resultado;
}


/** \brief realiza una división entre dos números enteros
 *
 * \param numeroUno int dividendo
 * \param numeroDos int divisor
 * \return float cociente
 *
 */
float dividir(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno / numeroDos;
    return resultado;
}


/** \brief multiplica dos números enteros
 *
 * \param numeroUno int primer factor de la multiplicación
 * \param numeroDos int segundo factor de la multiplicación
 * \return int producto de la multiplicación
 *
 */
float multiplicar(float numeroUno, float numeroDos)
{
    float resultado;
    resultado = numeroUno * numeroDos;
    return resultado;
}


/** \brief calcula el factorial de un número entero
 *
 * \param numero int número del cual se calculará el factorial
 * \return long int resultado de la operación
 *
 */
long int calcularFactorial(float numero)
{
    int numeroEntero;
    numeroEntero = (int)numero;
    long int resultado = 1;
    for(int i = numeroEntero; i > 0; i--)
    {
        resultado *= i;
    }
    return resultado;

}


/** \brief
 *
 * \param numero float
 * \return int
 *
 */
int esDecimal(float numero)
{
    int respuesta;
    int numeroEntero;
    numeroEntero = (int)numero;
    if(numero-numeroEntero != 0)
    {
        respuesta = 1;
    }
    else
    {
        respuesta = 0;
    }
    return respuesta;
}
