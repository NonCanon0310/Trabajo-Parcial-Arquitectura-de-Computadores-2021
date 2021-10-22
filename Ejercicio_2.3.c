/**
 * @file Ejercicio_2.3.c
 * @author Laura García y Salvatore Victorino
 * @brief Input any alphabet and check whether it is vowel or consonant.
 * @version 0.1
 * @date 2021-10-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#include<stdio.h>
#include<ctype.h>
int main(){

    char character;
    int c=0;
    char vocales[5]={'a','e','i','o','u'};
    printf("\n\t\t\t*********** PROGRAMA QUE DETERMINA SI EL CARACTER DIGITADO ES VOCAL O CONSONANTE ***********\n\n");
    printf("\nIngrese un caracter ya sea una vocal o consonante: ");
    scanf("%c", &character);

    char letra=tolower(character);

for (int i = 0; vocales[i]; i++)
    {
        if (letra == vocales[i])
        {
            c=1;
        }
    }
    printf("\n************************************************************\n");
    if (c==1){
        printf("El caracter digitado es una vocal");
    }
    else{
        printf("El caracter digitado es una consonante");
    }
    printf("\n************************************************************\n\n");

    return 0;
}