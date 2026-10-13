#include <iostream> //

using namespace std; //

//Questo e` un commento inline
/*
Blocco commento
puo` essere su piu` righe
*/

//Qui inizia il programma
int main(){

    int a; int b; //int a,b;

    cout << endl << "Inserire due valori interi positivi: "; 
    
    cin >> a;
    cin >> b;

    cout << endl << "Inseriti a:" << a <<" ; b: " <<b << endl;

    if (a >= 0 and b >0){ //Tutto ok
        cout << endl << "Quoziente: " << a/b << " ; Resto: " << a%b << endl;
    }
    else{ //Qualcosa non va bene
        if(b == 0){
            cout << endl << "divisione per zero non ammessa!" << endl;
        }
        else{
            cout << endl << "Almeno uno dei due operandi e` negativo!" << endl;
        }

    }
   


    return 0;
}  
//qui finisce il programma.

