/**
 * @file Ejercicio_2.1.c
 * @author Laura García y Salvatore Victorino
 * @brief Make a program of the Greatest Number Among the Given Three Number
 * @version 0.1
 * @date 2021-10-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
int main()
{

    int n1, n2, n3;

    printf("\n\t\t\t*********** PROGRAMA QUE MUESTRA EL NÚMERO MAYOR ENTRE TRES NÚMEROS ***********\n\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    printf("Ingrese otro numero: ");
    scanf("%d", &n2);
    printf("Ingrese otro numero: ");
    scanf("%d", &n3);

    printf("\n************************************************************\n");
    if (n1 > n2 && n1 > n3)
    {
        printf("De los números digitados, el número mayor es %d ", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("De los números digitados, el número mayor es %d ", n2);
    }
    else if (n3 > n2 && n3 > n1)
    {
        printf("De los números digitados, el número mayor es %d ", n3);
    }
    printf("\n************************************************************\n\n");
    return 0;
}
