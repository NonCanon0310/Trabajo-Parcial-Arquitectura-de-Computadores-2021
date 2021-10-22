/**
 * @file Ejercicio_6.2.c
 * @author Laura García y Salvatore Victorino
 * @brief Check whether two matrices are equal or not
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
int matrizA[3][3], matrizB[3][3];

void pedirDatosMatrizA(int n){
    int valor;
    matrizA[n][n];
    printf("\nINGRESE LOS DATOS DE LA MATRIZ A: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("Ingrese el valor de la posición [%d][%d] : ",i,j);
            scanf("%d",&valor);
            matrizA[i][j]=valor;
        }
    }
}

void pedirDatosMatrizB(int n){
    int valor;
    matrizB[n][n];
    printf("\nINGRESE LOS DATOS DE LA MATRIZ B: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("Ingrese el valor de la posición [%d][%d] : ",i,j);
            scanf("%d",&valor);
            matrizB[i][j]=valor;
        }
    }
    
}

void imprimirDatosMatrizB(int n){
    printf("\nDATOS DE LA MATRIZ B: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("%d  ", matrizB[i][j]);
        }
        printf("\n");
    }  
}

void imprimirDatosMatrizA(int n){
    printf("\nDATOS DE LA MATRIZ A: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("%d  ", matrizA[i][j]);
        }
        printf("\n");
    }  
}

void determinarIgualdad(int n){
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( matrizA[i][j]!=matrizB[i][j]){
                c++;
            }
        }
    }
    printf("\n********************************************\n");
    if(c>0){
        printf("Las matrices no son iguales");
    }
    else{
        printf("Las matrices son iguales");
    }
    printf("\n********************************************\n\n");
}

int main(){

int n;
printf("\n\t\t\t************** PROGRAMA QUE DETERMINA SI DOS MATRICES SON IGUALES **************\n\n");
printf("Ingrese el tamaño de las dos matrices (por ejemplo, si escribe 2, las dos matrices serán 2X2: ");
scanf("%d",&n);

pedirDatosMatrizA(n);
pedirDatosMatrizB(n);
imprimirDatosMatrizA(n);
imprimirDatosMatrizB(n);
determinarIgualdad(n);
    return 0;
}