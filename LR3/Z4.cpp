#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cout << "Введите x: ";
    cin >> x;
    double y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << "Значение функции у " << y;
    return 0;
}