#include <iostream> // Solita libreria per input/output da tastiera e schermo

#include <fstream> // Strumenti per la gestione dei file

using namespace std;

int main() {
    int a = 10;
    float b = 20.4f;
    char c = 'c';
    ofstream file_out;
    file_out.open("fileOut.dat"); // Apro il file in scrittura
    /*
    Attenzione: 
    -se il file non esiste viene creato
    -se il file esiste, viene sovrascritto 
    */
    if(file_out.fail()) { // Controllo se l'apertura del file è andata a buon fine
        cout << "Errore nell'apertura del file!" << endl;
        return 1; // Esco con codice di errore
    }
    //Se arrivo qui, il file è stato aperto correttamente
    file_out << a << " " << b << " " << c << " "; // Scrivo i dati nel file
    /*
    Attenzione: per evitare problemi di lettura del file, mettere sempre uno spazio o un carattere di fine riga alla fine di ogni riga */
    file_out.close(); // Chiudo il file
    return 0;
}