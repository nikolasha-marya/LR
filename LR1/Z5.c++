#include <iostream>
#include <cmath>

using namespace std;

int main()
{
double a; double b;
cout << "������� ��� ��������� �����: ";
cin >> a >> b;
cout << "����� ������� "<< abs(a) + abs(b) << endl;
cout << "�������� ������� "<< abs(a) - abs(b) << endl;
cout << "������������ ������� "<< abs(a) * abs(b) << endl;
cout << "������� ������� "<< abs(a) / abs(b) << endl;
return 0;
}
