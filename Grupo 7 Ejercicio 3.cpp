#include <iostream>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    cout << "Ingrese un string: "; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}
    
    if (flag) {
        cout << string1 << " no es un palindromo" << endl; 
    }    
    else {
        cout << string1 << " en un palindromo" << endl; 
    }
    system("pause");
    return 0;
}