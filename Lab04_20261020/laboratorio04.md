# Laboratorio 4: selezione, cicli (pre-condizionale,post-condizionale,for). Array.


## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e nomefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. 

## Esercizio 1
Implementate le soluzioni degli esercizi 1,2,3 e 4 discussi a lezione venerdì scorso. Le tracce degli esercizi sono disponibili nel file __EserciziLezione/Lezione3_esercizi.pdf__. Le soluzioni degli esercizi sono disponibili nella stessa cartella.


## Esercizio 2

Scrivere un programma che, chiesti all'utente in ingresso (lettura da tastiera) due numeri interi __a__ e __b__:
1. Salvi il valore più piccolo e il più grande rispettivamente in una variabile  di nome __minimo__ e __massimo__ (di tipo __int__).
2. Stampi a video __"Intervallo positivo"__ se l'intervallo _aperto_ __(minimo,massimo)__ è interamente contenuto nel semiasse positivo, __"Intervallo negativo"__ se invece è  contenuto nel semiasse negativo, __"Include zero"__ altrimenti.

## Esercizio 3
Scrivere un programma che:
1. Chiede all'utente di definire un intervallo __[a,b]__ (vedi __Esercizio 2__). A questo punto abbiamo definito un range di valori _validi_ [a,a+1,...,b-1,b].
2. Successivamente alla definizione del range, chiede all'utente di inserire il valore intero, chiamiamolo __val__, finché il valore inserito non è _valido_.


## Esercizio 4
Scrivere un programma che:
1. Chiede all'utente quanti voti vuole inserire e registrare il valore in una variabile intera __nvoti__. 

Notate che a questo punto sappiamo quanti voti dovranno essere caricati (e questo dovrebbe suggerire il costrutto di iterazione più idoneo...)

2. Legge gli __nvoti__ voti ad uno ad uno controllando, per ogni voto inserito sia valido, ovvero nel range __[18,19,...30]__ (vedi Esercizio 4).

3. Calcola la media aritmetica dei voti inseriti (o stampa qualche avvertimento se non sono stati inseriti valori).

## Esercizio 5

Dichiarato un vettore di 5 `float`, leggere da tastiera 5 valori razionali e, __dopo__ aver acquisito tutti i valori, stampare a video:
- i valori inseriti;
- la somma dei valori registrati;
- la media aritmetica dei valori registrati.

## Esercizio 6

Modificare il programma scritto nell'esercizio 4 nel seguente modo:

1. Dichiarare un vettore di 30 interi. 

2. Chiedere all'utente quanti voti vuole inserire, controllando che il _numero di voti_ sia nel range [1,2,...30]. 

3. Registrare i voti _validi_ inseriti nel vettore fino a quando l'utente termina l'inserimento dei voti.

5. Stampare a i voti inseriti e la loro media aritmetica.

## Esercizio 8

Il file __voti.dat__, in questa cartella, contiene un numero non precisato, ma minore di 30, di voti (valori nel range [18,29,...30]). Una volta dichiarato un vettore di 30 interi (`int vvoti[30]`):

1. Determinare il numero di voti scritti nel file. Stampare a video il risultato.
2. Caricare i voti da file nel vettore `vvoti`.
3. Determinare la media aritmetica dei voti.

__NOTA__: il file dovrà essere aperto una prima volta in lettura per contare i voti. Lo stream andrà poi chiuso e riaperto per effettuare il caricamento dei voti nell'array `vvoti`. Considerate che:
- Alla prima lettura (conteggio valori presenti su file), il numero di dati non è noto. Dovrete usare un contatore e il ciclo Spoletini per contare i voti.
- Alla seconda lettura il numero di dati presenti su file è noto, quindi sapete quante letture dovrete fare.

## Esercizio 9 (Avanzato)

Il file __votiZoppi.dat__, in questa cartella, contiene un numero precisato, ma minore di 30, di valori. Questi valori dovrebbero rappresentare dei voti, ma chi ha scritto il file era "distratto" e potrebbe aver inserito dei valori fuori dal range [18,...,30]. Caricare in un vettore di 30 interi tutti e soli i valori corrispondenti a voti.

__NOTA__: in questo caso da una prima lettura del file si evince quanti dati ci sono, come nell'esercizio precedente. Il numero di letture da effettuarsi nella seconda lettura del file è quindi noto MA non è detto che tutti i valori letti siano da inserire nel vettore. Potrebbe quindi essere comodo usare una variabile `int conta` che conti i voti validi inseriti fino ad un certo momento E anche la posizione di inserimento del dato valido appena letto nell'array....