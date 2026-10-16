# Laboratorio 4:  Array e stream I/O su file


## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e nomefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. 

## Esercizio 1
Caricare 10 valori interi in un array di dimensione sufficiente a contenerli. Calcolare la media aritmetica dei valori contenuti nell’array.

## Esercizio 2
Caricato in un array di 20 elementi interi una sequenza di n<=20 valori, chiedere all’utente quale numero vuole cercare. Se il numero e` presente nell’array, restituire (stampare) la posizione della prima occorrenza partendo da sinistra, altrimenti restituire -1.

## Esercizio 3
Caricato un array di 10 elementi di tipo float, determinare e stampare a video il valore più piccolo contenuto nell’array.

## Esercizio 4
Scrivere un programma che, caricati 5 valori carattere in un array __a__ di dimensione opportuna, registri in un secondo array __b__ della stessa dimensione gli elementi in ordine inverso.

Per intenderci, se gli elementi dell'array __a__ fossero ['a','b','c','d','e'], l'array __b__ dovrà contenere ['e','d','c','b','a']. 

## Esercizio 5
Utilizzando il programma scritto nell'esercizio 4, determiare se una sequenza di caratteri identifica una parola palindroma, ovvero una parola che si legge nello stesso modo se letta da sinistra verso destra o da destra verso sinistra. Esiste un modo per verificare la palindromia di una parola senza usare un secondo vettore?

## Esercizio 6

Il file __voti.dat__, in questa cartella, contiene un numero non precisato, ma minore di 30, di voti (valori nel range [18,29,...30]). Una volta dichiarato un vettore di 30 interi (`int vvoti[30]`):

1. Caricare i voti da file nel vettore `vvoti`.
2. Determinare la media aritmetica dei voti.

## Esercizio 7 

Il file __votiZoppi.dat__, in questa cartella, contiene un numero precisato, ma minore di 30, di valori. Questi valori dovrebbero rappresentare dei voti, ma chi ha scritto il file era "distratto" e potrebbe aver inserito dei valori fuori dal range [18,...,30]. Caricare in un vettore di 30 interi tutti e soli i valori corrispondenti a voti.

Registrare quindi tutti i voti caricati nell'array (quindi validi) su un file __voti_validi.dat__ con il seguente formato:

Prima riga: numero di voti validi
Seconda riga: primo voto
Terza riga: secondo voto

Su ogni riga dovranno quindi comparire dei valori interi.

## Esercizio 8
Caricare i voti validi prodotti dall'esercizio precedente dal file __voti_validi.dat__, usando sempre un array di 30 interi per registrare i voti. Questa volta, a differenza di quanto fatto nell'esercizio 6, il numero di voti validi sarà noto non appena letto il primo valore registrato su file (vedi Esercizio 7). Quindi sappiamo quanti voti dovremo leggere. Possiamo sfruttare questa informazione per leggere i voti in modo diverso da quanto fatto nell'esercizio 6?

Caricati i dati, determinare e registrare la media, il voto minimo e il voto massimo in un file __analisi_voti.dat__.
