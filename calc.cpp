#include <iostream>
#include <cmath>

using namespace std;

// Функція піднесення числа a до степеня b
double power(double a, double b) {
    return pow(a, b);
}

int main() {
    double a, b;
    cout << "Введіть число a та степінь b: ";
    cin >> a >> b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}