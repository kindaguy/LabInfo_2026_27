#include <iostream>

using namespace std;

/*
T *resize(T *v, int & size, int & used,int newSize);
*/

int *resize(int v[], int& size, int& used, int newSize);

int main(){

    int size = 5;
    int used = 0;
    int *v = new int[size];

    for(int i = 0; i < 5; i++){
        v[i] = i+1;
        used++;
    }

    cout << endl << "Array prima del resize: " << endl;
    for(int i = 0; i < used; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    v = resize(v, size, used, 10);

    cout << endl << "Array dopo il resize: " << endl;
    for(int i = 0; i < used; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    delete[] v;

    return 0;

}

int *resize(int v[], int& size, int& used, int newSize){
    
    int *newArray = NULL;
    int newUsed;

    //Punto 1
    newArray = new int[newSize];
    if(newArray == NULL){
        cout << endl << "Errore nell'allocazione del nuovo array!" << endl;
        return v;
    }

    //Punto 2
    if(newSize < used){
        //Potrò copiare solo newSize elementi, quindi newUsed = newSize
        newUsed = newSize;
    }
    else{
        //Potrò copiare tutti gli elementi, quindi newUsed = used
        newUsed = used;
    }

    //Oppure:
    // newUsed = (newSize < used) ? newSize : used;

    //Punto 3
    for(int i = 0; i < newUsed; i++){
        newArray[i] = v[i];
    }

    //Punto 4
    size = newSize;
    //Punto 5
    used = newUsed;
    //Punto 6
    delete[] v;

    //Punto 7
    return newArray;
}

