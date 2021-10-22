/**
 * @file Ejercicio_8.1.c
 * @author Laura García y Salvatore Victorino
 * @brief Find the first occurrence of a character in a given string.
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
#include<string.h>
int main(){

    char cadenaTexto[50];
    char caracter;
    int c=0;    

    printf("\n\t\t*********** PROGRAMA QUE DETERMINA LA POSICIÓN DE LA PRIMERA APARICIÓN DE UN CARACTER DADO ***************\n\n");
    printf("Ingrese una cadena de texto: ");
    fgets(cadenaTexto, 50, stdin);

    printf("Ingrese el carater que desea buscar: ");
    scanf(" %c",&caracter);

    for(int i=0; i<sizeof cadenaTexto;i++){
        
        if(caracter==cadenaTexto[i]){
            c=i+1;
            break;
        }
    }
    printf("\n\n***********************************************************************************************\n");
        if(c>0){
            printf("La primera aparición del caracter '%c' se encuentra en la posición %d de la cadena de texto",caracter,c);
        }
        else{
            printf("En la cadena de texto no se encuentra el caracter %c", caracter);
        }
        printf("\n***********************************************************************************************\n\n");
    return 0;
}