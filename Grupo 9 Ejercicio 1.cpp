#include <iostream>
using namespace std;
 
// Declaracion de funcion
double cube(double num);
 
 
int main()
{
    int num;
    double c;
 
    //Ingreso de numero de usuario
    cout<<"Digite un numero: "<<endl;
    cin>>num;
 
    c = cube(num);
 
    cout<<"Cubo de " <<num << " es "<<c;
 
    return 0;
}
 
//Funcion para hallar el cubo de cualquier numero
double cube(double num)
{
    return (num * num * num);
}
