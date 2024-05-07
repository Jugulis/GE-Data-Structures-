#include <iostream>

using namespace std;

double power(double x, int y) {
    double result = 1.0;
    for (int i = 0; i < y; ++i) {
        result *= x;
    }
    return result;
}

int main() {
    double x;
    int y;
    cout << "Enter the base (x): ";
    cin >> x;
    cout << "Enter the exponent (y): ";
    cin >> y;

    cout << x << " raised to the power " << y << " is: " << power(x, y);

    return 0;
}
