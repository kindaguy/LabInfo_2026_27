#include <iostream> //


using namespace std; //


//Qui inizia il programma
int main(){

    int val; //Ci leggo i valori da tastiera
    int accu = 0; //Accumulatore valori inseriti
    int conta = 0; //conta valori inseriti

    cout << endl << "Inserire valore (zero per terminare):";
    cin >> val; //Leggo dato

    /*Acquisizione dati*/
    //Ciclo while pre-condizionale
    while(val != 0){
        //Uso il dato
        accu = accu+val;
        //accu += val;
        conta = conta+1;
        //conta += 1;
        //conta++;
        //Leggo dato successivo
        cout << endl << "Inserire valore (zero per terminare):";
        cin >> val; //Leggo dato
    }

    /*Produzione risultati*/
    if (conta >0){
        cout << endl << "Media aritmetica: " << (float) accu /conta << endl;
    }
    else{
        cout << endl << "Non sono stati inseriti valori!" << endl;
    }


    return 0;
}  
//qui finisce il programma.

