// Menu-Driven Calculator Using Switch-cse

#include<iostream>
using namespace std;

int main()
{
    int choice;
    int num1 , num2 ;

    cout<< "1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\n";
    cin>> choice;
    cin>> num1 >> num2;

    switch(choice){
        case 1 : cout << "Addition : "<<num1 + num1 ; break;
        case 2 : cout << "Substraction : "<< num1 - num2 ; break;
        case 3 : cout << "Multification : "<< num1 * num2 ; break;
        case 4 : cout << "Division : "<< num1 / num2 ; break;
        case 5 : cout << "Modulus : "<< num1 % num2 ; break;
        default : cout << "Invlaid Choice ";
    }
 
    return 0;

}