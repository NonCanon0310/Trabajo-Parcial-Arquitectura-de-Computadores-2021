#include <iostream>

using namespace std;

void linearSearch(int a[], int n) {
  int temp = -1;

  for (int i = 0; i < 5; i++) {
    if (a[i] == n) {
      cout << "Elemento encontrado en posicion: " << i + 1 << endl;
      temp = 0;
      break;
    }
  }

  if (temp == -1) {
    cout << "No Element Found" << endl;
  }

}

int main() {
  int arr[5];
  cout << "Ingrese 5 elementos del Array" << endl;
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }
  cout << "Digite el elemento a buscar" << endl;
  int num;
  cin >> num;

  linearSearch(arr, num);

  return 0;
}