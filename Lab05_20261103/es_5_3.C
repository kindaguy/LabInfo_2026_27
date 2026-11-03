#include <iostream>

using namespace std;

int findPosMin(int [],int,int,int);
void spostaMin(int[],int,int, int);
void stampa(int[],int,int);
void stampa(int [],int);

int main(){

    int a[5] = {2,1,-2,3,2};
    //for(int i=0; i<5;i++) cin >> a[i];
    int indMin = 0;
    int indMax = 3;    

    
    spostaMin(a,5,indMin,indMax);
    //dopo spostamin, il valore piu` piccolo nel segmento inizio-fine
    //sara`  in posizione inizio.

    stampa(a,0,4);

    return 0;
}

void spostaMin(int v[],int num, int a, int b){
    int pos;
    int appo;
    //Trovo posizione minimo
    pos = findPosMin(v,num,a,b);
    //Scambio elementi in posizione a e pos
    appo = v[a];
    v[a] = v[pos];
    v[pos] = appo;

    return;
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

void stampa(int v[], int a, int b){
    for(int i=a; i<=b; i++){
        cout <<endl << v[i];
    }
    cout << endl;
}

void stampa(int v[], int n){
    stampa(v,0,n-1);
}