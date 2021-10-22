#include <iostream>
using namespace std;

int main() {
  int n1, n2, hcf;
  cout << "Ingrese dos numeros: ";
  cin >> n1 >> n2;

  // Intercambio de variables n1 y n2 si n2 es mayor.
  if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      hcf = i;
    }
  }

  cout << "HCF = " << hcf;

  return 0;
}