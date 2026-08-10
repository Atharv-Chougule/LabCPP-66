#include<iostream>
#include<string>

using namespace std ;

class Product {
    private: 
    int pro_id ;
    string pro_name ;
    int pro_Quantity ;
    double price ;

    public:
    void getdata (){
        cout << "Enter Product Id : " ;
        cin >> pro_id ;
        cin.ignore();

        cout << "Enter Product Name : ";
        getline(cin , pro_name);

        cout << "Enter Product Quantity : ";
        cin >> pro_Quantity;

        cout << "Enter Price : ";
        cin >> price ;

    } 

    double calculate_bill (){
        return pro_Quantity * price;
    }
    void putdata(){
        cout <<"\n-- Product Bill Details--" <<endl;
        cout << "Product id : "<< pro_id <<endl;
        cout << "Product name : "<< pro_name <<endl;
        cout << "Product Qunatity : "<< pro_Quantity << endl;
        cout << "price per unit : "<< price << endl;
        cout << "Total Bill : " << calculate_bill() << endl ;
    }
};

int main(){
    Product pro ;
    pro.getdata ();
    pro.putdata ();
    return 0;
}