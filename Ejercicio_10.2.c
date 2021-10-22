/**
 * @file Ejercicio_10.2.c
 * @author Laura García y Salvatore Victorino
 * @brief Input and print array elements using a pointer.
 * @version 0.1
 * @date 2021-10-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>
int main()
{
    int tam;

    printf("\n\t\t*********** PROGRAMA QUE PIDE Y MUESTRA UN ARREGLO CON PUNTEROS ***************\n\n");
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &tam);
    printf("\n");

    int arreglo[tam];
    int *puntero=arreglo;

    for (int i = 0; i < tam; i++){
    printf("Ingrese el elemento %d del arreglo:", i+1);
    scanf("%d", (puntero+i));
    }

    printf("\n*************************************************\n");
    printf("DATOS DEL ARREGLO: ");
    for (int i = 0; i < tam; i++){
        printf("%d ", *(puntero+i));
    }
    printf("\n*************************************************\n\n");
    return 0;
}
