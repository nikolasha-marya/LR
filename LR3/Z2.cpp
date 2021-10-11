#include <iostream>

using namespace std;

int main()
{
    double a; double b; double c; double d;
    cout << "Введите A, B, C: ";
    cin >> a >> b >> c;
    d = a;
    a = c;
    c = b;
    b = d;
    cout << "Новая А " << a << endl;
    cout << "Новая В " << b << endl;
    cout << "Новая C " << c << endl;
    return 0;
}