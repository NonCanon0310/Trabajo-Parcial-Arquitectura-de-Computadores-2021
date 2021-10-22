#include <iostream>
using namespace std;
int main() {
	int num,factorial=1;
	cout<<" Ingrese un numero:  ";
	cin>>num;
	for (int a=1;a<=num;a++) {
		factorial=factorial*a;
	}
	cout<<"El Factorial es ="<<factorial<<endl;
	return 0;
}