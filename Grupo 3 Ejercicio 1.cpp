#include<iostream.h>
#include<conio.h>
 
void main()
{
    int n,f,f1=-1,f2=1;
    clrscr();
     
    cout<<"  Ingrese el numero de terminos:";
    cin>>n;
     
    cout<<"  La Fibonacci Series es:";
     
    do
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<"  \n"<<f;
        n--;
    }while(n>0);
   system("pause");
}