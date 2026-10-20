#include <iostream>


using namespace std;

int main(){

    int n=10;
    float a[10];
    float val_min; 
    int pos_min;


    //Caricamento valori
    for(int i = 0; i < n; i++){
      a[i] = (1083*i + 2034)%503 * 0.1;
    }

    //Stampo a video quanto inserito
    for(int i=0; i < n; i++){
        cout << endl <<"a["<<i <<"] = " << a[i];
    }
    cout << endl;

    val_min = a[0];
    pos_min = 0;

    for(int i=1; i<n; i++){
        if(a[i]<val_min){
            val_min = a[i];
            pos_min = i;
        }
    //else{}
    }

    cout << endl << "elemento piu`  piccolo:" << val_min <<" trovato in posizione " << pos_min << endl;

    return 0;
}