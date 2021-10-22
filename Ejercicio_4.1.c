/**
 * @file Ejercicio_4.1.c
 * @author Laura García y Salvatore Victorino
 * @brief Temperature Conversion Celsius To Fahrenheit And Vice Versa
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
int conversionF( int temperatura){
    return (temperatura*9/5)+32;
}
int conversionC( int temperatura){
    return (temperatura-32)*5/9;
}

int main(){
    int opc;
    double temperatura;
    printf("\n\t\t\t\t********* CONVERSIÓN DE TEMPERATURAS **********\n");
    printf("\nMENÚ DE OPCIONES");
    printf("\n1. Conversión de Celsius a Fahrenheit");
    printf("\n2. Conversión de Fahrenheit a Celsius");
    printf("\n\nEscriba el número que identifica el cálculo que desea hacer: ");
    scanf("%d",&opc);

switch (opc)
{
case 1:
    printf("\nEscriba la temperatura en Celsius: ");
    scanf("%le",&temperatura);
    printf("\n******************************************\n");
    printf("RESULTADO: %d °F",conversionF(temperatura));
    printf("\n******************************************\n\n");
    break;
case 2:
    printf("Escriba la temperatura en Fahrenheit: ");
    scanf("%le",&temperatura);
    printf("\n******************************************\n");
    printf("RESULTADO: %d °C",conversionC(temperatura));
    printf("\n******************************************\n\n");
    break;
default:
    printf("No se eligio una opcion de la lista");
    break;
}
    return 0;
}