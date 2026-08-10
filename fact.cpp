#include <iostream>
using namespace std;

int main() {
    int n, fact = 1;
    cout << "Enter a number to find factorial: "; // Taking user input
    cin >> n;

    for (int i = 1; i <= n; i++) { // Multiply numbers from 1 to n
        fact *= i;
    }

    cout << "Factorial of " << n << " is " << fact;
    return 0;
}