#include<iostream>
using namespace std;
int main()
{
    int arr[100], tot, i, j, temp;
    cout<<"Ingrese el tamaño del array: ";
    cin>>tot;
    cout<<"Ingrese "<<tot<<" Elementos de Array: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEl Array Original es:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    j = tot-1;
    for(i=0; i<j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<"\n\nEl Inverso del Array es:\n";
    for(i=0; i<tot; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}