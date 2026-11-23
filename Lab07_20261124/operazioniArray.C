#include <iostream>
#include <iomanip>

using namespace std;

//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(float v[], int size, int n, float elem);

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(float v[], int size, int n, int pos, float elem);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(float v[], int size, int n, int pos);

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(float v[], int size, int n, int pos);

void stampaArray(float v[], int n);

int main(){

    float v[7] = {1.f,2.f,3.f,4.f,5.f};
    //Numero elementi dell'array
    const int size = 7;
    //Numero elementi usati
    int used = 5;
    int ret;

    stampaArray(v,used);


    cout << endl << "Appendo elemento... ";
    ret = appendi(v,size,used, 7.f);
    if(ret >= 0 ){
        used = ret;
    }

    stampaArray(v,used);


    cout << endl << "Inserisco elemento in posizione 1 ";
    ret = inserisci(v,size,used, 1, 2.3f);
    if(ret >= 0 ){
        used = ret;
    }
    
    stampaArray(v,used);

    cout << endl << "Appendo elemento... ";
    ret = appendi(v,size,used, 10.3f);
    if(ret >= 0 ){
        used = ret;
    }
    stampaArray(v,used);


    cout << endl << "Rimuovo elemento in posizione 5 con shift: ";
    ret = eliminaShift(v,size,used,5);
    if(ret >= 0 ){
        used = ret;
    }
    stampaArray(v,used);


    cout << endl << "Rimuovo elemento in posizione 5 con swap: ";
    ret = eliminaSwap(v,size,used,1);
    if(ret >= 0 ){
        used = ret;
    }
    stampaArray(v,used);


    return 0;
}


//Inserisce elemento elem in fondo all'array. Se non c'e` spazio restituisce -1.
int appendi(float v[], int size, int n, float elem){
    if(n >= size){
        cout << endl << "Array pieno. Non posso appendere!" << endl;
        return -1;
    }
    else{
        v[n] = elem;
        return n+1;
    }

}

//Inserisce elemento elem all'indice pos. Se non c'e` spazio restituisce -1.
int inserisci(float v[], int size, int n, int pos, float elem){
    if(pos <0 or pos > n){
        cout << endl << "Non posso inserire in posizione " << pos << "perche' creeerei un buco!" << endl;
        return -1;
    }
    if(n >= size){
        cout << endl << "Array pieno. Non posso inserire!" << endl;
        return -1;
    }
    else{
        //Sposto tutti gli elementi a dx di pos avanti di uno
        for(int i=n; i>pos; i--){
            v[i] = v[i-1];
        }
        v[pos]= elem;
        return n+1;
    }
}

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array viene preservato.
int eliminaShift(float v[], int size, int n, int pos){
    if(pos <0 or pos > n){
        cout << endl << "Posizione " << pos <<" fuori range degli indici validi [" << 0 << "..." <<n-1 << "]"<<endl;
        return -1;
    }
    else{
        for(int i=pos; i<n-1; i++) v[i] = v[i+1];
        return n-1;
    }
}

//Elimina l'elemento in posizione pos; se pos e` fuori range indici validi (ovvero !(0<= pos < n)),
//restituisce -1. L'ordine relativo degli elementi dell'array NON viene preservato.
int eliminaSwap(float v[], int size, int n, int pos){
    if(pos <0 or pos > n){
        cout << endl << "Posizione " << pos <<" fuori range degli indici validi [" << 0 << "..." <<n-1 << "]"<<endl;
        return -1;
    }
    else{
        v[pos] = v[n-1];
        return n-1;
    }
    
}


void stampaArray(float v[], int n){
    cout << endl << "Stampo array.";
    cout << endl << "Usati: " << n;
    for(int i=0; i<n; i++) cout << endl << setw(10) << v[i];
    cout << endl << "fine! " << endl;

}