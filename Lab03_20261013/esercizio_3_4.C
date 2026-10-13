#include <iostream> //


using namespace std; //


//Qui inizia il programma
int main(){

    int val; //Ci leggo i valori da tastiera
    int accu = 0; //Accumulatore valori inseriti
    int conta = 0; //conta valori inseriti

    char ans;
    
    /*Acquisizione dei dati*/
    //Ciclo while post-condizionale
    do{
        cout << endl << "Inserire valore:";
        cin >> val; //Leggo dato
        accu = accu+val;
        conta = conta+1;
        cout << endl <<"Vuoi proseguire? (y per si`):";
        cin >> ans;
    }while(ans == 'y');

    cout << endl << "Media aritmetica: " << (float) accu /conta << endl;
    

    return 0;
}  
//qui finisce il programma.

