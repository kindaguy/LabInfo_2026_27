# Laboratorio 5:  Funzioni e funzioni su array. Operazioni di dizionario.


## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e nomefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. 

## Esercizio 1
Dichiarare e definire una funzione che, presi 
in ingresso due valori razionali (__float__) che indicano il massimo e il minimo di un intervallo chiuso __[a,b]__ restituisca un valore inserito da tastiera dall'utente che appartenga all'intervallo. La funzione dovrà quindi andare avanti a chiedere valori _mentre_ l'utente continua ad inserire valori fuori dal range indicato.

La signature della funzione dovrà essere:

float leggiValido(float, float);

e supponiamo di chiamare i parametri formali rispettivamente __float a__ e __float b__, quindi la definizione della funzione avrà la forma:

float leggiValido(float a, float b){...}

La funzione dovrà inoltre

1. Controllare che _a <=b_ ovvero che l'intervallo inserito dall'utente sia ben formato. In caso contrario dovrà <u>scambiare</u> il contenuto delle variabili __a__ e __b__, così da ottenere un intervallo ben formato.
2. Acquisire un dato nell'intervallo e restituirlo.

## Esercizio 2

Dichiarare e definire una funzione che, presi in ingresso un vettore di interi, il numero __num__ di elementi in esso contenuti, e due indici __a__ e __b__,resituisca la posizione dell'elemento più piccolo nel segmento di array di indici compresi tra __a__ e __b__, inclusi. Qui diamo fiducia all'utente, e diamo per garantito che il segmento sia completamente incluso in __[0,num-1]__.

## Esercizio 3
Definire una funzione che preso in ingresso un array di interi, il numero __num__ di elementi registrati nell'array e due interi __a__ e __b__ che identifichino il segmento dell'array con indici  da __a__ a __b__ (inlcusi) sposti l'elemento più piccolo dell'array, la cui posizione è, diciamo, __pos__, in posizione __a__. A tal fine la funzione dovrà <u>scambiare</u> gli elementi in posizione __a__ e __pos__. Potete ovviamente usare la funzione definita nell'Esercizio 2.

## Esercizio 4
Implementate la funzione __append__ discussa a lezione. Questa funzione deve prendere in ingresso, nell'ordine, un array di __int__ (__int v[]__), la sua dimensione in memoria (__size__), il numero di elementi __int num__ già presenti nell'array e il nuovo elemento __int el__ da inserire. La funzione dovrà restituire il numero di elementi caricati nell'array aggiornato (__num -> num+1__) se l'inserimento in coda va a buon fine (ovvero se c'è spazio), -1 altrimenti.

## Esercizio 5
Implementare la funzione __insertAt__ discussa a lezione. Oltre ai parametri della funzione __append__ trattrata al punto precedente, dovremo fornire la posizione di inserimento che, in questo esercizio, dovrà essere effettuata <u>senza</u> preservare l'ordinamento relativo degli elementi. La funzione dovrà verificare che la posizione di inserimento non lasci "buchi" nell'array: in caso dovesse succedere, la funzione dovrà restituire il valore -2. Se l'inserimento non è possibile (spazio esaurito) la funzione dovrà restituire -1. Altrimenti (se la posizione è corretta e c'è spazio) la funzione dovrà inserire l'elemento (scambiandolo, per esempio con l'utlimo elemento dell'array) e restituire __num+1__.

## Esercizio 6
Come Esercizio 5, ma questa volta dobbiamo mantenere l'ordinamento relativo degli elementi dell'array (inserimento con shift a destra degli elementi già presenti, per intenderci).

## Esercizio 7
Implementare la funzione __remove__. La funzione riceve in ingresso un array di interi, il numero __num__di elementi in esso contenuti e la posizione dell'elemento da eliminare. La funzione dovrà restituire -1 se nella posizione indicata non ci sono elementi validi, o __num-1__ se l'operazione va a buon fine. La rimozione non deve preservare l'ordinamento relativo degli elementi dell'array.

## Esercizio 8 (Bonus track)

La 
