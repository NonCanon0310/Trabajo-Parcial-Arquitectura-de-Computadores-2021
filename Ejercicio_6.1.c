/**
 * @file Ejercicio_6.1.c
 * @author Laura García y Salvatore Victorino
 * @brief Multiply two matrices.
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>

int matrizA[3][3],matrizB[3][3], matrizC[3][3];

void multiplicacionMatrices(int n){
    matrizC[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            matrizC[i][j]=0;
            for( int k=0; k<n;k++){
            matrizC[i][j]+=matrizA[i][k]*matrizB[k][j];
            }
        }
    }
}

void imprimirResultado(int n){
    multiplicacionMatrices(n);
    printf("\n\n****************************************************************\n");
    printf("El resultado de la multiplicación de matrices es: \n\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            printf("%d  ",matrizC[i][j]);
            }
            printf("\n");
        }
    printf("****************************************************************\n\n");
}

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
int main(){

int n;
printf("\n\t\t\t************** PROGRAMA QUE MULTIPLICA DOS MATRICES **************\n\n");
printf("Ingrese el tamaño de las dos matrices (por ejemplo, si escribe 2, las dos matrices serán 2X2: ");
scanf("%d",&n);

pedirDatosMatrizA(n);
pedirDatosMatrizB(n);
imprimirResultado(n);

    return 0;
}