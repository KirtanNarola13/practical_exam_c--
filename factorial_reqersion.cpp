#include <iostream>
using namespace std;

class Factorial {
public:
    static int calculate(int n) {
        if (n <= 1) {
            return 1;
        } else {
            return n * calculate(n - 1);
        }
    }

    void printFactorials(int n) {
        for (int i = 1; i <= n; ++i) {
            cout << "Factorial of " << i << " is: " << calculate(i) << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Factorial f;
	f.printFactorials(n);

    return 0;
}

