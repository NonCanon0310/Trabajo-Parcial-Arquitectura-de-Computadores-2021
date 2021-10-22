#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Ingrese un entero positivo: ";
    cin >> n;

    cout << "Factorial de " << n << " = " << factorial(n);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}