#include<iostream>
#include<string>
using namespace std ;

class employee{
    private :
    int emp_id ;
    string designation;
    string branch;
    double basic_salary;

    public:
    void getdata(){
        cout << "Enter Employee ID : ";
        cin >> emp_id;
        cin.ignore();

        cout <<"Enter Designation : ";
        getline(cin , designation);

        cout << " Enter Baranch : ";
        getline (cin , branch);

        cout <<"Enter Basic Salary : ";
        cin >> basic_salary;
    }

    double calculate_salary(){

        double hra = 0.20 * basic_salary;
        double da = 0.10 * basic_salary;
        return basic_salary + hra + da ;

    }

    void displaydata (){
        cout <<"\n-- employee details--" << endl;
        cout << "ID: "<< emp_id <<endl;
        cout << "Desgination: " << designation <<endl;
        cout << "Branch: " <<branch <<endl;
        cout << "Basic Salary : "<< basic_salary <<endl;
        cout << "Total Gross Salary : "<< calculate_salary () <<endl;
    }
};

int main(){
    employee emp;
    emp.getdata();
    emp.displaydata();
    return 0;
}