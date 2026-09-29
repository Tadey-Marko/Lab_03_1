#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, A, B;

    cout << "x = ";
    cin >> x;

    A = x * x; // Стала частина

    // Спосіб 1: скорочена форма if
    if (x < 0)
        B = pow(1 + 4 * x, 2);
    if (x >= 0 && x <= 2)
        B = x / 2.0 + 2;
    if (x > 2)
        B = 5 * sin(x + 1);

    y = A + B;
    cout << "1) y = " << y << endl;

    // Спосіб 2: повна форма if-else
    if (x < 0)
        B = pow(1 + 4 * x, 2);
    else if (x <= 2)
        B = x / 2.0 + 2;
    else
        B = 5 * sin(x + 1);

    y = A + B;
    cout << "2) y = " << y << endl;

    return 0;
}