#include<iostream>
using namespace std ;

int main ()
{
    int *arr;
    int size ;

    cout<< " Enter the size f integer array : ";
    cin>> size ;

    cout<< " Crating an arry of size : "<< size << "..";
    arr = new  int[size];

    cout<< "\nDynamic allocaton of memory for array arr is successful . ";
     
    delete arr ;
    return 0;
}
