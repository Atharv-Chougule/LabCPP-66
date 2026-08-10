// Find Largest of Three Number 

# include<iostream>
using namespace std ;

int main(){
    int a ,b , c;
    cin >> a >> b >> c ;

    if (a>= b && a>= c)
        cout << a ;

    else if (b>=a && b>=c)
        cout << b ;

    else
        cout << c ;

    cout << " is largest "<<a ,b , c ;

    return 0 ;
}