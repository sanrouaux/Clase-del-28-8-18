#include <stdio.h>
#include <stdlib.h>

int ingresarOpcion(void);

int main()
{
    int opcion;
    int numeroUno;
    int numeroDos;

    do
    {
        printf("1. Sumar \n");
        printf("2. Restar \n");
        printf("3. Multiplicar \n");
        printf("4. Dividir \n");
        printf("5. Salir \n");
        printf("Ingrese una opción: \n");

        opcion = ingresarOpcion();


        switch(opcion)
        {
        case 1:
            printf("Estoy sumando");
            numeroUno = ingresarOpcion();
            numeroDos = ingresarOpcion();
            break;

        case 2:
            printf("Estoy restando");
            break;

        case 3:
            printf("Estoy multiplicando");
            break;

        case 4:
            printf("Estoy dividiendo");
            break;

        case 5:
            break;

        default:
            printf("No ingresó una opción correcta");

        }

        system("pause");
        system("cls");

    }
    while(opcion != 5)

    return 0;
}

int ingresarOpcion(void){
    int opcion
    printf("Ingrese un numero");
    scanf("%d", opcion);

    return opcion;
}

