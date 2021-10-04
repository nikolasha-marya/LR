#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double A; double B; double C; // òðè òî÷êè íà ÷èñëîâîé îñè
    cout << "Координаты А: ";
    cin >> A;
    cout << "Координаты В: ";
    cin >>	B;
    cout << "Координаты С: ";
    cin >> C;
    cout << "Отрезок АС: " <<C - A ;
    cout << "Отрезок ВС: " <<C - B ;
    cout << "Сумма длин отрезков: " <<2 * C - A - B;
    return 0;
}
