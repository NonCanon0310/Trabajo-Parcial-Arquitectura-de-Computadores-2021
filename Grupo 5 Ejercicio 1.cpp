#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[100];
    int i,size,odd=0,even=0;
    //Ingreso de tamaño del array
    cout<<"Ingrese el tamaño del array\n";
    cin>>size;
    cout<<"\nDigite los elementos del array\n\n";
    for(i=0; i<size; i++)
    {
        cout<<"Ingrese el elemento arr["<<i<<"] :";
        cin>>arr[i];//leer input del usuario para el elemento del array
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"\nCantidad de numeros pares en el array :"<<even<<"\n";
    cout<<"Cantidad de numeros impares en el array : "<<odd;
     getch();
    return 0;
}