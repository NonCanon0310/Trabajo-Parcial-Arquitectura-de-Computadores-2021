/**
 * @file Ejercicio_10.1.c
 * @author Laura García y Salvatore Victorino
 * @brief Add two numbers using pointers.
 * @version 0.1
 * @date 2021-10-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0;
    int *p=&num1, *q=&num2;

    printf("\n\t\t*********** PROGRAMA QUE SUMA DOS NÚMEROS (CON AYUDA DE PUNTEROS) ***************\n\n");
    printf("Ingrese un número:");
    scanf("%d", &num1);
    printf("Ingrese otro número:");
    scanf("%d", &num2);

    printf("\n**************************************************\n");
    printf("La suma de los números %d y %d es = %d\n", *p, *q, (*p+*q));
    printf("**************************************************\n\n");

    return 0;
}