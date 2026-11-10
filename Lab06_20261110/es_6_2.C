#include <iostream>
#include <fstream>

using namespace std;

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
        if(dati[i] >= 18 && dati[i] <= 31){
            contaOK++;
        }
    }
    cout << endl << "Il numero di voti validi è: " << contaOK << endl;

    datiOK = new int[contaOK];

    //Per ogni elemento del vettore di dati, se è valido
    //lo copio nel vettore datiOK, e incremento la posizione di datiOK, ovvero pos;

    for(int i = 0; i < conta; i++){
        if(dati[i] >= 18 && dati[i] <= 31){
            datiOK[pos] = dati[i];
            pos++;
        }
    }

    /*DEBUG*/
    //Stampo i dati validi
    // for(int i = 0; i < contaOK; i++){
    //     cout << endl << datiOK[i];
    // }
    // cout << endl;

    //Scrivo i dati validi su file
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