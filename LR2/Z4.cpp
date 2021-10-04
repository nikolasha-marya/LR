#include <iostream>
#include <cmath>

int main()
{
    double x1, x2, y1, y2;

    cout << "Введите координаты двух противоположных вершин прямоугольника: ";
    cin >> x1 >> y1 >> x2 >> y2;

    double x3 = x1; double y3 = y2;

    double a = abs(y2 - y1);
    double b = abs(x2 - x1);

    double S = a * b;
    double P = 2 * (a + b);

    cout << "Площадь прямоугольника: " << S;
    cout << "Периметр прямоугольника: " << P;

    return 0;
}

