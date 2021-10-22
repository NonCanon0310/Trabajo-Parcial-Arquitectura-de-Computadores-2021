#include<iostream>
#include<stdio.h>
  
int main()
{
    // Nombre antiguo
    char old_name[] = "hola.txt";
  
    // Cualquier string
    char new_name[] = "holamundo.txt";
    int value;
  
    // Cambio de nombre
    value = rename(old_name, new_name);
  
    // Impression resultado
    if(!value)
    {
        printf("%s", "Archivo Renombrado Exitosamente!");
    }
    else
    {
        perror("Error");
    }
    return 0;
}