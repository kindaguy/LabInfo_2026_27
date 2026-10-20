#include <iostream>


using namespace std;

int main(){

    int n;
    int a[20];
    int val;
    bool found = false;
    int pos;
  
    do{
        cout << endl <<"Quanti dati vuoi inserire? (Massimo 100):";
        cin >>n;
    }while(n<=0 or n>20);

    //Caricamento valori
    for(int i = 0; i < n; i++){
      a[i] = (73*i + 4)%20;
    }

    //Stampo a video quanto inserito
    for(int i=0; i < n; i++){
        cout << endl <<"a["<<i <<"] = " << a[i];
    }
    cout << endl;

    cout << endl << "Valore da cercare: ";
    cin >> val;

    for(int i=0; i<n and !found; i++){
        if(a[i]==val){
            found = true;
            pos = i;
        }

    }
 
    if(found){
        cout << endl << "elemento trovato in posizione " << pos << endl;
    }
    else{
        cout << "-1" << endl;
    }
    return 0;
}