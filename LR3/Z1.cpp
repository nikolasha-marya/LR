#include <iostream>

using namespace std;

int main()
{
    double a; double b; double c;
    cout << "Введите A, B: ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "Новая À " << a << endl;
    cout << "Новая В " << b << endl;
    return 0;
}