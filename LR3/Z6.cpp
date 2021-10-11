
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A;
    cout << "Введите х: ";
    cin >> A;
    double b = A * A;
    A = b * b;
    A = A * A;
    cout << "Значение A8 " << A;
    return 0;
}