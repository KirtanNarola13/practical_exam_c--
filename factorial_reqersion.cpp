/*
1. Write a C++ program to print factorial series using recursion.
*/

#include <iostream>
using namespace std;

class Factorial {
public:
    Factorial(int n) {
        for (int i = 1; i <= n; ++i) {
            cout << "Factorial of " << i << " is: " << calculate(i) << endl;
        }
    }

private:
    int calculate(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * calculate(n - 1);
        }
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Factorial f(n); 
    return 0;
}
