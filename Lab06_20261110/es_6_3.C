#include <iostream>
using namespace std;

void scambio(float &, float &);

int main(){
    float c,d;

    cout << "Inserisci due numeri: ";
    cin >> c >> d;

    cout << endl << "Prima di scambio. c: " << c << " d: " << d << endl;

    scambio(c,d);
    cout << endl << "Dopo lo scambio. c: " << c << " d: " << d << endl;
    return 0;
}

void scambio(float &a, float &b){
    float temp = a;
    a = b;
    b = temp;
}