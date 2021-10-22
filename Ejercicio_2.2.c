/**
 * @file Ejercicio_2.2.c
 * @author Laura García y Salvatore Victorino
 * @brief A program that determinate if the number is positive or negative
 * @version 0.1
 * @date 2021-10-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
int main()
{
    int numero;

    printf("\n\t\t\t********* PROGRAMA QUE DETERMINA SI EL NÚMERO DIGITADO ES POSITIVO O NEGATIVO *********\n\n");
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    printf("\n************************************************************\n");
    if (numero >= 0)
    {
        printf("El número digitado es positivo");
    }
    else
    {
        printf("El número digitado es negativo");
    }
    printf("\n************************************************************\n\n");
    return 0;
}
