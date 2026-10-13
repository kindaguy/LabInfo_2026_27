#include <iostream> //


using namespace std; //


//Qui inizia il programma
int main(){

    int val; //Ci leggo i valori da tastiera
    int accu = 0; //Accumulatore valori inseriti
    int conta = 0; //conta valori inseriti

    int tot; //Numero dati da inserire

    cout << endl << "Inserire numero di valori";
    cin >> tot; //Leggo numero di valori

    cout << endl << "Andiamo a caricare " << tot <<"  dati: " << endl;
    /*Acquisizione dati*/
    //Ciclo while pre-condizionale
    while(conta < tot){
        cout << endl <<"Inserisci dato: ";
        //leggo dato
        cin >> val;
        //Uso il dato
        accu = accu+val;
        //accu += val;
        conta = conta+1;
    }

    /*Produzione risultati*/
    if (tot !=0){
        cout << endl << "Media aritmetica: " << (float) accu /conta << endl;
    }
    else{
        cout << endl << "Non sono stati inseriti valori!" << endl;
    }


    return 0;
}  
//qui finisce il programma.

