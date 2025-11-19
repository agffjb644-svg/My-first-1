#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter a: ";
    cin >> a;

    cout << "Enter b: ";
    cin >> b;

    // Check for division by zero
    if (num2 == 0) {
        cout << "Error: Cannot divide by zero!" << endl;
    } else {
        double result = a / b;
        cout << "Result: " << result << endl;
    }

    return 0;
}
