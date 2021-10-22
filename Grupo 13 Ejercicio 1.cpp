#include<iostream>

using namespace std;

int binarySearch(int arr[], int p, int r, int num) {
   if (p <= r) {
      int mid = (p + r)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, p, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, r, num);
   }
   return -1;
}
int main(void) {
   int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num;
   cout << "Ingrese el numero a buscar: \n";
   cin >> num;
   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1){
      cout<< num <<" No esta presente en el array";
   }else{
      cout<< num <<" esta presente en el indice "<< index <<" del array";
   }
   return 0;
}