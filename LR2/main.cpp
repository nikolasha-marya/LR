#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x1; double x2; double y1; double y2;
    cout << "Координаты первой точки: ";
    cin >> x1 >> y1;
    cout << "Координаты второй точки: ";
    cin >> x2 >> y2;
    double x1x2 = x2 - x1; double y1y2 = y2 - y1;
    double AB = pow(x1x2, 2) + pow(y1y2, 2);
    cout << "Расстояние между точками: " << sqrt(AB);
    return 0;
}