/**
 * @file Ejercicio_8.2.c
 * @author Laura García y Salvatore Victorino
 * @brief Delete all occurrences of a character from a string.
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include <stdio.h>
#include <string.h>

int main()
{
    char cadenaTexto[100];
    char caracter;
    int size, j = 0;
    char caracterAux;
    char cadenaTextoAux[100];

    printf("\n\t\t*********** PROGRAMA QUE ELIMINA TODAS LA VECES QUE UNA PALABRA SALE EN LA CADENA DE TEXTO ***************\n\n");
    printf("Ingrese una cadena de texto: ");
    fgets(cadenaTexto, 100, stdin);

    printf("Ingrese el carater que desea eliminar en la cadena de texto: ");
    scanf(" %c", &caracter);

    printf("\n**************************************************************\n");
    printf("Cadena de texto original: %s", cadenaTexto);
    for (int i = 0; i < sizeof cadenaTexto; i++)
    {
        if (cadenaTexto[i] != caracter)
        {
            caracterAux = cadenaTexto[i];
            cadenaTextoAux[j] = caracterAux;
            j++;
        }
    }
    cadenaTextoAux[j] = '\0';

    printf("\nCadena de texto sin el caracter %c : %s", caracter, cadenaTextoAux);
    printf("\n**************************************************************\n\n");
    return 0;
}