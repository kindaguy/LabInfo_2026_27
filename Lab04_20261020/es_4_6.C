#include <iostream>
#include <fstream>

using namespace std;

int main(){
    /*Dichiarazione variabili*/
    int conta=0;
    int vvoti[30]; //Dichiaro un array di 10 interi
    int accu = 0;
   
    int val;

    ifstream file_in;
    ofstream file_out;

    file_in.open("voti.dat");
    if(file_in.fail()){
        cout << endl << " Ooops! Problema con aggancio stream!" << endl;
        cout << endl << " Esco!";
        return -1;
    }
    //Stream aperto correttamente
    file_in >> val;
    while(!file_in.eof()){ //C'e` un dato da considerare
        vvoti[conta] = val;
        conta++;
        file_in >> val;
    }

    cout << endl << "Ho trovato " << conta << " dati su file." <<endl;

    cout << " Dati caricati: ";
    for(int i=0; i<conta; i++){
        cout << endl << vvoti[i];
    }
    cout << endl;

    file_in.close();
   
    file_out.open("copia_voti.dat");
    //Se il file non esiste lo creo
    //Se il file esiste, lo sbianchetto e ci scrivo.

    for(int i=0; i<conta; i++){
        file_out << vvoti[i] << endl;
    }
    
    file_out.close();
    
    return 0;
}