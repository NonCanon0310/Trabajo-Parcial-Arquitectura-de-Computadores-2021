/**
 * @file Ejercicio_12.1.c
 * @author Laura García y Salvatore Victorino
 * @brief Bubble Sort in C
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>


void imprimirMatriz(int tam, int matriz[]){
    for(int i=0; i<tam;i++){
        printf("%d ",matriz[i]);
    }
}

int main(){

    int tam;
    int aux;

    printf("\n\t\t*********** PROGRAMA QUE ORDENA UN ARREGLO DE FORMA ASCENDENTE(BUBBLE SORT) ***************\n\n");
    printf("Ingrese el tamaño de la arreglo: ");
    scanf("%d",&tam);
    printf("\n");
    int matriz[tam];

    for(int i=0; i<tam; i++){
        printf("Ingrese el valor del arreglo en la posición %d: ",i);
        scanf("%d",&matriz[i]);
    }

    printf("\n*************************************************************\n");
    printf("Arreglo original: ");
    imprimirMatriz(tam, matriz);


    for(int i=0; i<tam -1; i++){
        for(int j=0; j<tam-i-1;j++){
            if(matriz[j]>matriz[j+1]){
                aux=matriz[j];
                matriz[j]=matriz[j+1];
                matriz[j+1]=aux;
            }
        }
    }

    printf("\nArreglo ordenado ascendentemente: ");
    imprimirMatriz(tam, matriz);
    printf("\n*************************************************************\n\n");
    return 0;
}
