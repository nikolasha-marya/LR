#include <iostream>
using namespace std;

void z1(){

    double a;
    cout << "Введите значение а: " ;
    cin >>a ;
    cout << a / 180;
}

void z2(){
    double a;
    cout << "Введите значение а: " ;
    cin >>a ;
    cout << a * 180;
}

void z3(){
    double x, a, y;
    cout << "Введите значение массы конфет: " << endl;
    cin >> x;
    cout << "Введите значение стоимости Х кг конфет: ";
    cin >> a;
    cout << "Введите значение y кг конфет: ";
    cin >> y;
    cout << "Стоимость 1 кг: "<<x/a;
    cout << "Стоимость y кг: "<<x/a*y;

}

void z4(){
    double s {150.5}; double v1 {20.0}; double v2 {30.0}; double t{2.5};
    cout << (v1 + v2) * t + s;

}

void z5(){
    double a{4.2}; double b{0.2};
    cout << -b/a;
}

void z6(){
    double a1{2}, a2{3}, b1{1}, b2{5}, c1{0}, c2{3};
   double d1 = a1*b2 - a2*b1;
   double dx = c1 * b2 - c2 * b1; double dy = a1 * c2 - a2 * c1;
   double x = dx / d1 ; double y = dy / d1;
   cout << x << y;
}


int main() {
    z1();
    z2();
    z3();
    z4();
    z5();
    z6();
    return 0;
}
