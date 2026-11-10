#include <iostream>
#include <fstream>

using namespace std;

//Dichiarato
bool valido(int);
int screma(int[],int);

int main(){

    ifstream file_in;
    int conta = 0;
    int dato;

    int *dati;

    int contaOK=0;
    int * datiOK;
    int pos = 0;

    ofstream file_out;

    file_in.open("votiZoppi.dat");

    if(file_in.fail()){
        cout << "Errore nell'apertura del file" << endl;
        return 1;
    }
    //Se arrivo qui, il file è stato aperto correttamente
    file_in >> dato;
    while(!file_in.eof()){
        conta++;
        file_in >> dato;
    }
    cout << endl <<"Il numero di voti presenti nel file è: " << conta << endl;
    file_in.close();

    //Sappiamo quanti dati ci sono nel file, quindi possiamo creare un array di dimensione corretta

    dati = new int[conta];

    //Abbiamo a disposizione l'array.
    //Sono ottimita e do per scontato che l'allocazione dinamica
    //sia andata a buon fine (quindi non controllo se dati è NULL).

    file_in.open("votiZoppi.dat");
    if(file_in.fail()){
        cout << "Errore nell'apertura del file" << endl;
        return 1;
    }
    //Carico i dati nell'array
    for(int i = 0; i < conta; i++){
        file_in >> dati[i];
    }
    file_in.close();

    //Stampo i dati
    for(int i = 0; i < conta; i++){
        cout << endl << dati[i];
    }
    cout << endl;

    //Parte nuova inizia qui

    //Determino il numer di voti validi (quelli compresi tra 18 e 31)

    for(int i = 0; i < conta; i++){
        if(valido(dati[i])){
            contaOK++;
        }
    }
    cout << endl << "Il numero di voti validi è: " << contaOK << endl;

    //Scrematura dei dati: quando elimino un elemento lo sovrascrivo con l'ultimo elemento dell'array.

    for(int i=0; i<conta; i++){
        if(!valido(dati[i])){
            dati[i] = dati[conta-1];
            conta--;
            i--; // Per non saltare l'elemento appena spostato
        } 
    }




    file_out.open("votiOK.dat");

    //Scrivo il numero di voti validi
    file_out << contaOK << endl << endl;
    for(int i=0;i<contaOK;i++){
        file_out << datiOK[i] << endl;
    }
    file_out.close();

    delete [] datiOK;
    delete[] dati;
    return 0;
}


bool valido(int v){
    return (v >= 18 && v <= 31);
}

int screma(int v[],int ndati){
    for(int i=0; i<ndati; i++){
        if(!valido(v[i])){
            v[i] = v[ndati-1];
            ndati--;
            i--; // Per non saltare l'elemento appena spostato
        } 
    }
    return ndati;
}