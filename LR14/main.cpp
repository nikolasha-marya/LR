#include <iostream>
#include <cmath>

using namespace std;

void z1(){
    int a = 3; int b = 6;
        for (int i = a; i <= b; i++){
            for (int j = 1; j <= i; j++)
                cout<< i <<" ";
         cout << endl;
        }
}

void z2(){
    int a = 7; int b = 3; int k = a;
        while(k >= 0){
            k -= b;
        }
        cout << k + b;
        cout << endl;
}

void z3(){
    int n = 10; int k = 0; int summ = 0;
        while(summ < n){
            ++k;
            summ += k;
        }
     cout << k << " "<< summ;
    cout << endl;
}

void z4(){
    double p = 12.1; int k = 1; double s = 1000.0;
        while (s <= 1100){
        ++k;
        s += s * p / 100;
       }
    cout << k << " " <<s;
    cout << endl;
}

void z5(){
    int a = 88; int b = 3;
    while((a != 0) && b != 0){
        if (a > b) a = a % b;
        else b = b % a;
    }
    cout << a + b;
    cout << endl;

}

void z6(){
    int n = 144;
    int f = 0; int f1 = 1; int f2 = 1; int k = 3;
    while (f < n){
        ++k;
        f = f2 + f1;
        f2 = f1;
        f1 = f;
    }
    cout << k;
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
    cout<<"\n";
    z6();
    return 0;
}
