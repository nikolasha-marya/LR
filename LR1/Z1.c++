#include <iostream>

using namespace std;

int main()
{
double a; double b;
cout << "Введите стороны прямоугольника: ";
cin >> a >> b;
double S = a * b; double P = 2 * (a + b);
cout << "Площадь прямоугольника "<< S << endl;
cout << "Периметр прямоугольника "<< P << endl;
return 0;
}
