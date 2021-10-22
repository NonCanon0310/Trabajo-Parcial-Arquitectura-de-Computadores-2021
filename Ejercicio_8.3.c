/**
 * @file Ejercicio_8.3.c
 * @author Laura García y Salvatore Victorino
 * @brief Remove all extra blank spaces from the given string.
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

    int c = 0, d = 0;
    char texto[100], aux[100];
    printf("\n\t\t\t*********** PROGRAMA QUE BORRA ESPACIOS EXTRA EN TODA LA CADENA ***************\n\n");
    printf("Ingrese un texto: ");
    fgets(texto, 100, stdin);

    while (texto[c] != '\0')
    {
        if (!(texto[c] == ' ' && texto[c + 1] == ' '))
        {
            aux[d] = texto[c];
            d++;
        }
        c++;
    }

    aux[d] = '\0';
    printf("\n**************************************************************\n");
    printf("Texto original: %s", texto);
    printf("\nTexto sin espacios extra: %s", aux);
    printf("\n**************************************************************\n\n");

    return 0;
}