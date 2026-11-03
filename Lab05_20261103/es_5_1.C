#include <iostream>

using namespace std;

//Dichiarazione della funzione
float leggiValido(float,float);

int main(){

    float minimo, massimo;
    float valido;
    float performance[10];
    int ndati = 10;
    // cout << endl << "Inserire minimo e massimo dell' intervallo:";
    // cin >> minimo >> massimo;
    // cout << endl << " Hai inserito i valori minimo = " << minimo <<", massimo = " << massimo << endl;

    // //Devo leggere un valore nell'intervallo specificato
    // valido = leggiValido(minimo,massimo);
    // cout << "Valore buono letto: "  << valido << endl;

    for(int i=0; i<ndati; i++){
        cout << "Inserire media voti studente:";
        performance[i] = leggiValido(18.0f,31.0f);
    }
    return 0;
}


float leggiValido(float a,float b){
    
    float appo;
    float val;
    cout << endl <<"a= " << a << ", b = " << b << endl;

    //1 Verifichiamo che l'intervallo [a,b] sia
    //ben formato e, in caso contrario, raddrizziamolo
    if(b<a){
        //Scambio il contenuto di a e b
        appo = a;
        a = b;
        b = appo;
    }
    //Quando arrivo qui l'intervallo [a,b] e` ben formato

    do{
        cout << endl << "Inserire valore tra " << a << " e " << b <<":";
        cin >> val;
    }while(val < a or val > b);

    //Ho ottenuto un valore valido, lo restituisco
    return val;

}