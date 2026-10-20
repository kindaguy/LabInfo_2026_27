#include <iostream>

using namespace std;

int main(){
    /*Dichiarazione variabili*/
    int n;
    int a[100]; //Dichiaro un array di 10 interi
    int accu = 0;
    float m;
   
    /*Fine regione di dichiarazione variabili */

    /*Da qui in avanti codice*/

    do{
        cout << endl <<"Quanti dati vuoi inserire? (Massimo 100):";
        cin >>n;
    }while(n<=0 or n>100);

    //Caricamento valori
    for(int i = 0; i < n; i++){
        cout << endl << "Inserire intero " << i+1 <<"  di " << n <<": ";
        cin >> a[i]; 
    }
    //Stampo a video quanto inserito
    for(int i=0; i < n; i++){
        cout << endl <<"a["<<i <<"] = " << a[i];
    }
    cout << endl;

    //Finito di caricare e controllare i dati
    //Calcolo la media

    for(int i = 0; i<n; i++){
        accu = accu + a[i];
    }
    //accu contiene la somma a[0]+a[1]+...+a[9]

    cout << endl <<"La media dei valori inseriti e`: " << ((float) accu)/n << endl;

    
    return 0;
}