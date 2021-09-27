#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double a; double b;
cout << "Введите два ненулевых числа: ";
cin >> a >> b;
cout << "Сумма модулей "<< abs(a) + abs(b) << endl;
cout << "Разность модулей "<< abs(a) - abs(b) << endl;
cout << "Произведение модулей "<< abs(a) * abs(b) << endl;
cout << "Частное модулей "<< abs(a) / abs(b) << endl;
return 0;
}
