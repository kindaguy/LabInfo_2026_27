#include <iostream>

using namespace std;

int findPosMin(int [],int,int,int);

int main(){

    int a[5] = {2,1,-2,3,2};
    //for(int i=0; i<5;i++) cin >> a[i];
    int p;
    p = findPosMin(a,5,0,1);
    cout << endl <<"Posizione minimo: " << p << endl;

    return 0;
}

int findPosMin(int v[],int num,int a,int b){
    //Segmento a-b che considero valido 0<=a <=b <=num-1
    int minimo = v[a];
    int posMin = a;
    for(int i=a+1; i<=b; i++){
        if(v[i]<minimo){
            minimo = v[i];
            posMin = i;
        }
    }
    //Quando esco dal ciclo minimo contiene il valore piu` piccolo nel segmento
    //e posMin la sua posizione
   
    return posMin;
}