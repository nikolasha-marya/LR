#include <iostream>

using namespace std;

int main()
{
double a; double b;
cout << "Введите два ненулевых числа: ";
cin >> a >> b;
cout << "Сумма квадратов "<< a * a + b * b << endl;
cout << "Разность квадратов "<< a * a - b * b << endl;
cout << "Произведение квадратов "<< a * a * b * b << endl;
cout << "Частное квадратов "<< (a * a) / (b * b) << endl;
return 0;
}
