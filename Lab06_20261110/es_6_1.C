#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file_in;
    int conta = 0;
    int dato;

    int *dati;

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
    //NOTA: chiudo lo stream
    //Sappiamo quanti dati ci sono nel file, quindi possiamo creare un array di dimensione corretta

    dati = new int[conta];

    //Abbiamo a disposizione l'array.
    //Sono ottimita e do per scontato che l'allocazione dinamica
    //sia andata a buon fine (quindi non controllo se dati è NULL).

    file_in.open("votiZoppi.dat");
    //Riaprendo lo stream la lettura riparte dall'inizio del file.

    if(file_in.fail()){
        //Ricontrollo l'apertura del file, anche se l'avevo già fatto prima.
        //Se siete di natura ottimista, potete anche non farlo, ma io sono un pessimista di natura.
        cout << "Errore nell'apertura del file in caricamento" << endl;
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

    delete[] dati;
    return 0;
}