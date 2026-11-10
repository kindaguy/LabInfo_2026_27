#include <iostream>
#include <fstream>

using namespace std;

int * caricaDatiFile(const char [], int &);

int main(){
    int * dati;
    int ndati;
    dati = caricaDatiFile("votiZoppi.dat", ndati);
    cout << "Il numero di voti presenti nel file è: " << ndati << endl;
    cout << "I voti presenti nel file sono: ";
    for(int i = 0; i < ndati; i++){
        cout << dati[i] << " ";
    }
    cout << endl;
    return 0;
}

int * caricaDatiFile(const char nomefile[], int &ndati){

    ifstream file_in;
    int * dati;
    int dato;

    file_in.open(nomefile);
    if(file_in.fail()){
        cout << "Errore nell'apertura del file" << endl;
        //Attenzione: la funzione restituisce, normalmente un indirizzo.
        //Se qualcosa andasse storto, come in questo caso, segnaliamo l'occorrenza
        //di una eccezione usando il valore di ritorno NULL.
        //NULL è la costante, nota al compilatore,  0x00.000
        return NULL;
    }
    //Se stream agganciato correttamente, procedo a contare i dati presenti nel file
    ndati = 0;
    file_in >> dato;
    while(!file_in.eof()){
        ndati++;
        file_in >> dato;
    }
    file_in.close();
    //Sappiamo quanti dati ci sono nel file, quindi possiamo creare un array di dimensione corretta
    dati = new int[ndati];
    //Abbiamo a disposizione l'array.
    //Sono ottimista e do per scontato che l'allocazione dinamica
    //sia andata a buon fine (quindi non controllo se dati è NULL).

    //Riapro lo stream per leggere i dati e caricarli nell'array
    file_in.open(nomefile);
    for(int i = 0; i < ndati; i++){
        file_in >> dati[i];
    }
    file_in.close();

    //Restituisco l'indirizzo dell'array creato dinamicamente.
    return dati;
}