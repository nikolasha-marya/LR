

#include <iostream>

using namespace std;

int main()
{
    double A;
    cout << "Введите А: ";
    cin >> A;
    double b = A * A;
    b=b*b;
    int c{0};
    b = b*A;

    cout << "Значение A15 " << b*b*b+c;
    return 0;
}