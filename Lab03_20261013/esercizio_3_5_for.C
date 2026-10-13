
#include <iostream> //


using namespace std; //


//Qui inizia il programma
int main(){

    int val; //Ci leggo i valori da tastiera
    int accu = 0; //Accumulatore valori inseriti
    
    int tot; //Numero dati da inserire

    cout << endl << "Inserire numero di valori";
    cin >> tot; //Leggo numero di valori

    cout << endl << "Andiamo a caricare " << tot <<"  dati: " << endl;
    /*Acquisizione dati*/
    //Ciclo for
    //for(;conta<tot;)
    for(int conta=0; conta <tot; conta=conta+1){
        cout << endl <<"Inserisci dato: ";
        //leggo dato
        cin >> val;
        //Uso il dato
        accu = accu+val;
        //accu += val;
    }

    /*
    for(
    variabile da usare come contatore e tipicamente inizializzata a zero
    int conta = 0

    condizione che viene verificata prima di eseguire il corpo
    conta < tot

    incremento del contatore che viene fatto dopo aver eseguito 
    tutte le istruzioni del corpo
    
    conta = conta +1
    
    ovvero
    
    conta++
    )
    */

    /*Produzione risultati*/
    if (tot !=0){
        cout << endl << "Media aritmetica: " << (float) accu /tot << endl;
    }
    else{
        cout << endl << "Non sono stati inseriti valori!" << endl;
    }


    return 0;
}  
//qui finisce il programma.

