#include <iostream>;
using namespace std;

int main() {
    int altura, base;
    float area;    

    cout<<"Ingrese la base y altura respectivamente : ";
    cin>>altura>>base;
    area= (0.5)*altura*base;    //formula/calculo del area

    cout<<"El area del triangulo es de : "<<area;
	return 0;
}