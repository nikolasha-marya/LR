#include <iostream>

using namespace std;

int main()
{
double a; double b;
cout << "������� ��� ��������� �����: ";
cin >> a >> b;
cout << "����� ��������� "<< a * a + b * b << endl;
cout << "�������� ��������� "<< a * a - b * b << endl;
cout << "������������ ��������� "<< a * a * b * b << endl;
cout << "������� ��������� "<< (a * a) / (b * b) << endl;
return 0;
}
