#include <iostream>
# include <cmath>
#include <ctime>

using namespace std;

void z1(){
int n = 6;
int *mass = new int [n];

for (int i = 0; i < n; i++){
    mass[i] = i * 2 + 1;
    cout << mass[i] <<" ";
}
    cout<< endl;
}

void z2(){
    int n = 5; int a = 3; int d = 2;
    double *mass = new double [n];

    for (int i = 1; i <= n; i++){
        mass[i] = a * pow(d, i - 1);
        cout << mass[i] << " ";
    }
    cout<< endl;
}

void z3(){
int n = 6; int a = 1; int b = 2;
int *mass = new int [n];

cout << a<<" "<<b<<" "<<a + b<< " ";
mass[0] = a; mass[1] = b; mass[2] = a + b;

for (int i = 3; i < n; i++){
    mass[i] = mass[i - 1] * 2;
    cout << mass[i] << " ";
}
    cout<< endl;
}

void z4(){
    srand ((int)time(0));
    int n = 5; int k = n - 1;
    double *mass = new double [n];

    for (int i = 0; i < n; i++){
        mass[i] = rand()%100 + 1;
        cout << mass[i]<<" ";
    }

    cout<< endl;

    for (int i = 0; i < n / 2; i++){
        cout << mass[i] << " "<< mass[i + k]<<" ";
        k -= 2;
    }
    if (n % 2 == 1){
        cout<<mass[n/2];
    }
    cout<< endl;
}

void z5(){

 srand ((int)time(0));
 int n = 5; int k = n % 2;
 double *mass = new double [n];

 for (int i = 0; i < n; i++){
     mass[i] = rand()%100 + 1;
     cout << mass[i]<<" ";
 }

 cout<< endl;

 for (int i = 0; i < n; i += 2){
        cout << mass [i] << " ";
 }

    for (int i = n - k - 1; i >= 0; i -= 2){
     cout << mass [i] << " ";
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
    return 0;
}
