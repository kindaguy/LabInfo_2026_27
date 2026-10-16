#include <iostream> // Solita libreria per input/output da tastiera e schermo

#include <fstream> // Strumenti per la gestione dei file

using namespace std;

int main() {
    int a;
    float b;
    char c;

    // cout << "Inserire numero intero, numero razionale e carattere: ";
    // cin >> a >> b >> c;
    // cout << "Hai inserito: " << a << ", " << b << ", " << c << endl;

    ifstream file_in;
    file_in.open("fileProva.dat"); // Apro il file in lettura
    if(file_in.fail()) { // Controllo se l'apertura del file è andata a buon fine
        cout << "Errore nell'apertura del file!" << endl;
        return 1; // Esco con codice di errore
    }
    //Se arrivo qui, il file è stato aperto correttamente
    file_in >> a >> b >> c; // Leggo i dati dal file
    cout << "Dati letti dal file: " << a << ", " << b << ", " << c << endl;
    file_in.close(); // Chiudo il file
    return 0;
}