/**
 * @file ejercicio_6.3.c
 * @author Laura García y Salvatore Victorino
 * @brief The transpose of a matrix.
 * @version 0.1
 * @date 2021-10-21
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <stdio.h>

int matriz[3][3] = {0}, matrizAux[3][3] = {0};

void imprimirMatrizTraspuesta(int n1, int n2)
{
    printf("\nMATRIZ TRASPUESTA\n");
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            printf("%d  ", matrizAux[i][j]);
        }
        printf("\n");
    }
    printf("******************************************\n\n");
}

void imprimirMatrizOriginal(int n1, int n2)
{
    printf("\n******************************************\n");
    printf("MATRIZ ORIGINAL\n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
}
void matrizTraspuesta(int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            matrizAux[j][i] = matriz[i][j];
        }
    }
}

void pedirDatosMatriz(int n1, int n2)
{
    int valor;
    printf("\nINGRESE LOS DATOS DE LA MATRIZ: \n");
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Ingrese el valor de la posición [%d][%d] : ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

int main()
{
    int n1 = 0, n2 = 0;
    printf("\n\t\t\t************** PROGRAMA QUE DETERMINA LA MATRIZ TRASPUESTA DE UNA INGRESADA POR EL USUARIO **************\n\n");
    printf("Ingrese el número de filas de la matriz que va a ingresar: ");
    scanf("%d", &n1);
    printf("Ingrese el número de columnas de la matriz que va a ingresar: ");
    scanf("%d", &n2);
    matriz[n1][n2];
    matrizAux[n2][n2];

    pedirDatosMatriz(n1, n2);
    imprimirMatrizOriginal(n1, n2);
    matrizTraspuesta(n1, n2);
    imprimirMatrizTraspuesta(n1, n2);
    return 0;
}