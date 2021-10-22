#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int number,reversed_num=0;
    cout << "Ingrese un numero para hallar su inverso" << endl;
    cin>>number; //Tomandolo como input lo guarda como variable
    cout << "Ingresaste: "<<number;
    while(number!=0){
        reversed_num=reversed_num*10;
       reversed_num=reversed_num+number%10;
       number=number/10;
    }
    cout << "\nEl reverso es: "<<reversed_num;
    getch();
    return 0;
}