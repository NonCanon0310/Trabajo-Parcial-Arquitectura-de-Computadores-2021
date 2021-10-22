/**
 * @file Ejercicio_4.3.c
 * @author Laura García y Salvatore Victorino
 * @brief Create a Simple calculator using a switch case.
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
void suma(int n1, int n2){
    printf("La suma de los dos números es %d", n1+n2);
}

void resta(int n1, int n2){
    printf("La resta de los dos números es %d", n1-n2);
}

void multiplicar(int n1, int n2){
    printf("La multiplicación de los dos números es %d", n1*n2);
}

void dividir(int n1, int n2){
    printf("La división de los dos números es %d", n1/n2);
}
int main(){
    int opc,n1,n2;

    printf("\n\t\t********* CALCULADORA **********\n");
    printf("\nMENÚ DE OPCIONES");
    printf("\n1. SUMAR");
    printf("\n2. RESTAR");
    printf("\n3. MULTIPLICAR");
    printf("\n4. DIVIDIR");

    printf("\n\nEscriba el número de la operación que desea realizar: ");
    scanf("%d",&opc);
    printf("\nIngrese el primer número: ");
    scanf("%d",&n1);
    printf("Ingrese el segundo número: ");
    scanf("%d",&n2);
    printf("\n************************************************************\n");
    switch (opc)
    {
    case 1:
        suma(n1,n2);
        break;
    case 2:
        resta(n1,n2);
        break;
    case 3:
        multiplicar(n1,n2);
        break;
    case 4:
        dividir(n1,n2);
        break;
    default:
        printf("No se eligio una opcion de la lista");
        break;
    }
    printf("\n************************************************************\n\n");
    return 0;
}
