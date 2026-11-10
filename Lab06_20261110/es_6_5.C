#include <iostream>
using namespace std;

//Dichiarazione tipi di dato e funzioni

struct complesso{
    double re;
    double im;
};

int main(){
    complesso v[5];
    complesso *p;
    complesso c;
    complesso d;
    c.re = 4.2;
    c.im = 3.1;

    cout << "Parte reale: " << c.re << endl;
    cout << "Parte immaginaria: " << c.im << endl;
    
    d=c;
    cout << "Parte reale: " << d.re << endl;
    cout << "Parte immaginaria: " << d.im << endl;

    v[1].im = 2.3;
    return 0;
}