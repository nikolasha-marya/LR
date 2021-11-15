#include <iostream>
using namespace std;

void z1(){
    int byte = 2050;
    cout<< byte/8;
};

void z2(){
 double a = 10.0;
 double b = 3.0;
 int c = a / b;
 cout << c;
};

void z3(){
    double a = 10.0;
    double b = 3.0;
    int c = a / b;
    cout << a - (c * b);
}

void z4(){
    int a = 21;
    int b = a / 10 + a % 10 * 10;
    cout << b;
}

void z5(){
   int a = 123;
   int b = a % 100 * 10 + a / 100;
   cout << b;
}

int main() {
    z1();
    cout<<"\n";
    z2();
    cout<<"\n";
    z3();
    cout<<"\n";
    z4();
    cout<<"\n";
    z5();
    return 0;
}
