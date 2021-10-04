#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1; double x2; double y1; double y2; double x3; double y3;
    cout << "Координаты первой точки: ";
    cin >> x1 >> y1;
    cout << "Координаты второй точки: ";
    cin >> x2 >> y2;
    cout << "Координаты третьей точки: ";
    cin >> x3 >> y3;
    double x1x2 = x2 - x1; double y1y2 = y2 - y1; double x1x3 = x1 - x3; double x2x3 = x2 - x3; double y1y3 = y3 - y1; double y3y2 = y3 - y2;
    double AB = pow(x1x2, 2) + pow(y1y2, 2); double AC = pow(x3x1, 2) + pow(y3y1, 2); double BC = pow(x2x3, 2) + pow(y3y2, 2);
    cout << "Периметр треугольника: " << sqrt(AB) + sqrt(BC) + sqrt(AC);
    double p = 0.5(sqrt(AB) + sqrt(BC) + sqrt(AC));
    double s = p * (p - AB)(p - AC)(p - AC);
    cout << "Площадь треугольника: " << sqrt(s);
    return 0;
}


