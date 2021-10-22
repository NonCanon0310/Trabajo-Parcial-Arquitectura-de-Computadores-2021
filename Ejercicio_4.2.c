/**
 * @file Ejercicio_4.2.c
 * @author Laura García y Salvatore Victorino
 * @brief Check whether a number is even or odd using a switch case.
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
int determinar(int num)
{
    if (num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main()
{
    int num;
    printf("\n\t\t\t*********** PROGRAMA QUE DETERMINA SI UN NÚMERO ES PAR O IMPAR ***********\n\n");
    printf("Ingrese un número: ");
    scanf("%d", &num);
    int respuesta = determinar(num);
    printf("\n************************************************************\n");
    switch (respuesta)
    {
    case 1:
        printf("El número es par");
        break;
    case 2:
        printf("El número es impar");
        break;
    default:
        printf("ups, hubo un problema");
        break;
    }
    printf("\n************************************************************\n\n");
    return 0;
}

