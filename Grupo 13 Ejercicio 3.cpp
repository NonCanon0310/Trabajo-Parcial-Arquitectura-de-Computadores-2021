#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int beg, int end)
{
 int mid;
 
 if (beg > end){
  
  cout << "Numero no encontrado";
  return 0;
  
 } else {
  
  mid = (beg + end) / 2;
  
  if(arr[mid] == num){
   
   cout << "Numero se encuentra en " << mid << " indice \n";
   return 0;
  
  } else if (num > arr[mid]) {
   
   BinarySearch (arr, num, mid+1, end);
   
  } else if (num < arr[mid]) {
   
   BinarySearch (arr, num, beg , mid-1);
  }
 }
 
 
}
 
int main() {
 
 int arr[100], num, i, n, beg, end;
 
 cout <<"Ingrese el tamaño del array (Max 100) \n";
 cin >> n;
 
 cout <<"Digite los valores sorteados \n";
 
 for(i=0; i<n; i++) {
  
  cin >> arr[i];
 }
 
 cout <<"Digite el valor a buscar \n";
 cin >> num;
 
 beg = 0;
 end = n-1;
 
 BinarySearch (arr, num, beg, end);
 
 return 0;
}
