#include <iostream>
#include <cmath>
using namespace std;

void z1(){
    int a = 7; int b = 8;
    if (a == b){
        a = 0; b = 0;
        cout<<a <<" "<<b;
    }
    else if (a > b){
        b = a;
        cout<<a<<" "<<b;
    }
    else {
        a = b;
        cout<<a<<" "<<b;
    }
}

void z2(){
    double a = 7.0; double b = 8.0; double c = 3.0;
    double max1; double max2;
    if (a > b) {
    max1 = a;
       if (b > c)
           max2 = b;
       else max2 = c;
    }
    else {
        max1 = b;
        if (a > c)
            max2 = a;
        else max2 = c;
    }
    cout<< max1 + max2;
}

void z3(){
    double x1 = 1.0; double y1 = 2.0; // для А
    double x2 = 3.0; double y2 = 4.0; // для В
    double x3 = 4.0; double y3 = 5.0; // для С

    double AB = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double AC = sqrt ((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

    if (AB < AC)
         cout <<"B: " << x2 <<":"<< y2 <<"; "<< AB;
    else cout <<"C: " << x3 <<":"<< y3 <<"; "<< AC;
}

void z4(){
    double a = 6; double b = -2;
    if (a > 0 && b > 0 ){
        cout <<"first";
    }
    else if (a < 0 && b > 0){
        cout <<"second";
    }
    else if (a < 0 && b < 0){
        cout <<"third ";
    }
    else if (a > 0 && b < 0)
        cout <<"fourth";
}

void z5(){
    int a = 0;
    if (a < 0)
        cout<<"minus ";
    if (a >0)
        cout<<"plus ";
    if (a == 0)
        cout<<"zerouth ";
    if (a % 2 == 0 && a != 0)
        cout << "even";
    else if (a != 0)
        cout << "uneven";
}

void z6(){
    int a = 1;
    if (a % 2 == 0 )
        cout << "even ";
    else cout << "uneven ";
    if (a < 10)
        cout <<"single";
    else if (a < 100)
        cout <<"two-digit ";
    else cout <<"three-digit ";
}

int main() {
    z1();
    cout << "\n";
    z2();
    cout << "\n";
    z3();
    cout << "\n";
    z4();
    cout << "\n";
    z5();
    cout << "\n";
    z6();
    cout << "\n";
}