/**
 * @file Ejercicio_10.3.c
 * @author Laura García y Salvatore Victorino
 * @brief Compare two strings using pointers.
 * @version 0.1
 * @date 2021-10-21
 *
 * @copyright Copyright (c) 2021
 *
 */


#include <stdio.h>
#include<string.h>

int main()
{
    char texto1[100]; 
    char texto2[100]; 
    char *a=texto1,*b=texto2, determinante = 0;
    int comparacion=0;

    printf("\n\t\t*********** PROGRAMA QUE COMPARA DOS TEXTOS CON PUNTEROS ***************\n\n");
    printf("Ingrese el texto #1 : ");
    fgets(texto1, 100, stdin);
    printf("Ingrese el texto #2 : ");
    fgets(texto2, 100, stdin);

    while (*a != '\0' && *b != '\0')
    {
        if (*a != *b)
        {
            determinante = 1;
        }
        a++;
        b++;
    }

    printf("\n*******************************************************\n");
    printf("Texto 1: %s",texto1);
    printf("\nTexto 2: %s",texto2);
    if (determinante == 0)
        printf("\n\nLos dos textos son iguales");
    else
        printf("\n\nLos dos textos son diferentes");
    printf("\n*******************************************************\n\n");
    return 0;
}