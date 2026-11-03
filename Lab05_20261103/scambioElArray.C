#include <iostream>

using namespace std;

void scambia(int [],int,int);
void stampa(int[],int,int);
void stampa(int [],int);

int main(){

    int a[5] = {2,1,-2,3,2};
    
    stampa(a,5);
    scambia(a,0,2);
    stampa(a,5);

    return 0;
}

void scambia(int v[],int p1,int p2){
    int appo;
    appo = v[p1];
    v[p1] = v[p2];
    v[p2] = appo;

}

void stampa(int v[], int a, int b){
    for(int i=a; i<=b; i++){
        cout <<endl << v[i];
    }
    cout << endl;
}

void stampa(int v[], int n){
    stampa(v,0,n-1);
}