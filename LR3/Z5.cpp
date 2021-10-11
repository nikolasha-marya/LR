#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cout << "Новый x: ";
    cin >> x;
    double z = x - 3;
    double y = 4 * pow(z, 6) - 7 * pow(z, 3) + 2;
    cout << "Значение у " << y;
    return 0;
}