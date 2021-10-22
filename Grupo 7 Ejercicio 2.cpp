#include <iostream>
#include <cstring>
 
 
using namespace std;
 
int main()
{
    char arr[] = "Hola Mundo!";
 
    cout << "String Original:\n"<< arr<< endl;
    cout<<"String en MAYUSCULA/CAPS:\n";
    for (int x=0; x<strlen(arr); x++)
        putchar(toupper(arr[x]));
     
    return 0;
}