// Find factorial of a number using for loop

#include<iostream>
using namespace std;

int main(){
    int i, n ;
     long fact = 1;

    cout <<"Enter nmber : ";
    cin >> n;

    for (i=1 ; i<=n ; i++)
       fact *= i;

       cout << "Factorial : "<< fact;

       return 0 ;

}