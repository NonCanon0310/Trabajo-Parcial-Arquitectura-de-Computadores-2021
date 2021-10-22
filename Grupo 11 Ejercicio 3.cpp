#include <stdio.h>
   
int main(void)
{
    // Se le puede agregar a cualquier codigo de C++
  
    char c; 
    FILE *fp = fopen(__FILE__, "r");
   
    do
    {
        c = fgetc(fp);
        putchar(c);
    }
    while (c != EOF);
   
    fclose(fp);
   
    return 0;
}