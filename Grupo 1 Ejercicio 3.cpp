#include <iostream>
using namespace std;
  
int main() {
    float fahren, celsius;
  
    cout << "Ingrese la temperatura en Celsius\n";
    cin >> celsius;
  
    // convertir celsius a fahreneheit 
    // Multiplica por 9, divide por 5, y despues suma 32
    fahren =(9.0/5.0) * celsius + 32;
  
    cout << celsius <<"Centigrados es igual a " << fahren <<"Fahrenheit";
      
    return 0;
}