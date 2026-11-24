#include <iostream>

using namespace std;

struct myArray_int{
    int size;
    int used;
    int* raw;
};


//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(int v[], int size, int n, int elem);
int appendi(myArray_int& arr, int elem);

int main(){

    int newUsed;
    myArray_int v; //Creo una istanza della t-upla myArray_int
    v.size = 7; //Setto il campo size

    v.raw = new int[v.size]; //Alloco dinamicamente l'array raw di dimensione size
    v.used = 0; //Inizializzo il campo used

    newUsed = appendi(v.raw, v.size, v.used, 1);

    if(newUsed >= 0){
        v.used = newUsed;
    }
    else{
        cout << endl << "Errore nell'appendere l'elemento!" << endl;
    }

    cout << endl << "Elementi utilizzati: " << v.used << endl;
    cout << endl <<"Elemento inserito " << v.raw[0] << endl;
    return 0;

}




int appendi(int v[], int size, int n, int elem){
    if(n >= size){
        cout << endl << "Array pieno. Non posso appendere!" << endl;
        return -1;
    }
    else{
        v[n] = elem;
        return n+1;
    }

}

int appendi(myArray_int& arr, int elem){
    return appendi(arr.raw, arr.size, arr.used, elem);

}