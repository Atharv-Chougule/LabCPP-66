
#include <iostream>   
#include <fstream>    
using namespace std;

int main() {
    
    ofstream fout;
    string line;

   
    fout.open("sample.txt",ios::app);

    if (!fout) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }
    
    cout << "Enter text (type -1 to stop):" << endl;
    while (true) {
        getline(cin, line);

        
        if (line == "-1")
            break;

     
        fout << line << endl;
    }

    
    fout.close();
 
  
    ifstream fin;
    fin.open("E10.cpp");

    if (!fin) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    cout << "\nFile content:\n";

    while (getline(fin, line)) {
    
        cout << line << endl;
    }

    
    fin.close();

    return 0;
}
