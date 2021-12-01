#include <iostream>
using namespace std;

void z1(){
    int a = 8; int b = 1;
    if (a > 2 && b <=3){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

void z2(){
    int a = 5; int b = 3; int c = 1;
    if (a<b and b<c){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

void z3(){
    int a = 345;
    if ((a/100 >=1 or a/10 < 1) and a % 2 !=0) {
        cout<<"false";
    }
    else{
        cout<<"true";
    }
}

void z4(){
    int a = 576;
    int b = a / 100;
    int c = a % 100 / 10;
    int d = a % 10;

    if ((b > c and c > d) or (b < c and c < d)) {
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

void z5(){
    int a = 8776;
    int b = a / 1000;
    int c = a % 1000 / 100;
    int d = a % 1000 % 100 / 10;
    int e = a % 10;
    if (b == e and c == d){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

void z6(){
    int a = 5; int b = 3; int c = 4;
    if (a*a == b*b + c*c){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

void z7(){
    int a = 5; int b = 3; int c = 4;
    if (a <= b + c or b <= a + c or c <= a + b){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
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
   cout<<"\n";
   z7();
   cout<<"\n";
   return 0;
}
