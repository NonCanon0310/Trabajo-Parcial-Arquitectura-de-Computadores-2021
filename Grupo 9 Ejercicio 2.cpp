#include <iostream>
#include <conio.h>

using namespace std;

int find_Oddeven(int);

int main()
{
    int num;
    cout << "Digite un numero" << endl;
    cin>>num;
    if(num%2==0)
  cout<<num<<" es par";
else
    cout<<num<<" es impar";
    find_Oddeven(num);
    getch();
    return 0;
}
//Crear funcion
int find_Oddeven(int num){
return(num%2==0);//Retorna el valor
}