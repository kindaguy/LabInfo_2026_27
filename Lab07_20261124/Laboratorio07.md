# Ultime operazioni su array: resize. Vettori $\mathbb{R}^n$. Librerie.

## La t-upla myArray_T

Partiamo dalla definizione di una t-upla che ci consenta di rappresentare un array tenendo traccia di tutte le informazioni utili alla sua gestione:

__struct myArray_T{__
__int size;__

__int used;__

__T *raw;__

__};__

Notate che ho lasciato il tipo indicato con T nel nome. Se per esempio vorrete un array di int dovrete sostituire __int__ ad ogni occorrenza di T; se invece avessimo un array di __float__...beh...usate la vostra immaginazione. 

- Il campo __size__ contiene il numero di elementi dell'array
- Il campo __used__ contiene il numero di valori, di tipo __T__, effettivamente contenuti nell'array.
- Il campo __raw__ contiene l'indirizzo in cui inizia l'array. 

Le operazioni su array (_append_, _insert_, _remove_) che abbiamo fino ad ora implementato possono essere facilmente utilizzate per agire su t-uple __myArray__. Prendiamo le funzioni che avete implementato per il Laboratorio 5 (Esercizi 4,5,6 e 7). Come potete chiamare quelle funzioni in modo tale da lavorare su una istanza della t-upla __myArray_int__?



## Esercizio 1
Scrivete un programma che, definito il tipo t-upla __myArray_int__, risolva quanto richiesto nell'Esercizio 1 del Laboratorio 6 caricando i dati in una istanza della t-upla myArray_int. Il campo __size__ dovrà contenere il numero di elementi dell'array mentre il campo __used__ il numero di elementi usati dell'array (i due valori possono ovviamente coincidere).

NOTA: per comodità, vi ho messo una copia del file __votiZoppi.dat__ in questa cartella.

## Esercizio 2
Scrivete una funzione 

__int *resize(int v[], int& size, int& used, int newSize)__

che, ricevuto in ingresso (l'indirizo di) un array di interi, un riferiemento alla variabile (intera) che contiene la sua dimensione, un riferimento alla variabile (intera) che contiene il numero di elementi usati dell'array e un intero che indica una nuova dimensione, faccia quanto segue:


1) Crei dinamicamente un array di interi di dimensione __newSize__, registrando l'indirizzo di questo nuovo array in una variabile (locale) __int * newArray__. Se la __new__ fallisce (la __new__ resituisce __NULL__), la funzione dovrà stampare il messaggio "Resize: Allocazione fallita!"  e restituire il valore __v__ (e terminare).
2) Dertermini il minimo tra __newSize__ e __used__ e assegni il valore determinato alla variabile (locale) __int newUsed__. 
3) Ricopi, elemento per elemento, i primi __newUsed__ elementi dell'array __v__.
4) Registri in __size__ il valore __newSize__
5) Registri in __used__ il valore di __newUsed__.
6) Cancelli  l'array __v__ (__remove [] v__).
7) Restituisca l'indirizzo del nuovo array creato, ovvero il contenuto della variabile __newArray__ (__return newArray__).

NOTA: quando dichiarate una variabile puntatore (come __newArray__) prendete l'abitudine di inizializzarla a __NULL__.

Questa funzione, a consuntivo, crea un nuovo array di dimensione __newSize__, ci riversa dentro quanto "ci sta" dei dati contenuti nel vecchio vettore, registra/restituisce tutte le informazioni necessarie per usare il nuovo vettore (usando reference/valore di ritorno).

## Esercizio 3
Modificate l'Esercizio 2 del Laboratorio 6 in modo tale che, al termine della scrematura dei voti non validi, l'array dei dati venga ridimensionato in modo opportuno per poter contenere esattamente tutti i dati validi rimasti.


## Esercizio 4
Scrivete una procedura

__void resize(myArray_int &myV, int newSize)__

che effettui l'operazione di resize su un __myArray_int__ passato per riferimento. 

ATTENZIONE: il "lavoro sporco" l'avete già fatto nell'Esercizio 2. Questa funzione __resize__ deve solo richiamare in modo opportuno la funzione __resize__ di quell'esercizio.

## Esercizio 5

La lettura di dati da file è lenta, molto più lenta delle operazioni in memoria RAM. Spesso si preferisce, quindi, evitare la doppia lettura di un file di dati necessaria per prima contare, o poi caricare i dati in un array.

Definire una funzione 

__int caricaVotiFile(const char nomefile[], myArray_int& contenitore)__

che si occupi del caricamento dei dati da __votiZoppi.dat__. La funzione dovrà partire da un contenitore (array) con solo 4 elementi e "allargare" il vettore di 4 elementi alla volta quando lo spazio a disposizione sarà esaurito. 

La funzione dovrà restituire il valore 0 se il caricamento va a buon fine, -1 se ci sono problemi con il file, -2 se ci sono problemi di allocazione.

SUGGERIMENTO: potete anche modificare la funzione __append__, implementata nel Laboratorio 5, in modo tale che, quando lo spazio libero dell'array finisce, l'array venga ridimensionato aggiungendo una o più posizioni. Considerato che una __resize__ ha un costo di esecuzione conviene aggiungere più di un elemento in modo da evitare un numero eccessivo di __resize__ (per esempio, possiamo raddoppiare la dimensione dell'array). Ovviamente potrebbero rimanere posizioni vuote dell'array alla fine del caricamento.


## Esercizio 6
Definita la t-upla

__struct vettoreR2{__

__double x;__

__double y;__
    
__};__

definire le funzioni:

__double inner(vettoreR2 v, vettoreR2 w)__
__double norm(vettoreR2 v)__

che calcolino, rispettivamente, il prodotto scalare tra i vettori __v__ e __w__ e la norma del vettore __v__. Ricordiamo che:

$(v,w) = v.x * w.x + v.y * w.y$

mentre 

$|v| = \sqrt{(v,v)}$.

## Esercizio 7

Il file __vettoriR2.dat__ contiene, riga per riga, un numero non precisato di coppie di valori razionali. Ciascuna coppia definisce un vettore in $\mathbb{R}^2$. Scrivere un programma che, definita la t-upla __vettoreR2__, conti e carichi in un vettore di __vettoreR2__ tutti i vettori descritti nel file. Il programma dovrà quindi stampare a video:

1. Il numero di vettori caricati.
2. La descrizione (coordinate) del vettore di norma minima e massima.
3. La descrizione di tutti  i vettori ortogonali al vettore $v_0 = (1.0, 2.0)$ (ovvero che abbiano prodotto scalare $|(v,v0)| < 10^{-15}$).

## Esercizio 8

Il file __sfere.dat__ contiene, riga per riga, la descrizione di un numero non precisato di sfere. Ciascuna sfera è definita da due valori: un valore razionale (__float__) che ne specifica il diametro e un carattere ('r','g' o 'b') che ne indica il colore (rosso, verde o blu). Caricate le sfere in un array di 

__struct sfera{float diam; char col};__

stampare a video:
1. Il numero di sfere caricate
2. Il numero di sfere di ciascun colore
3. La descrizione della sfera di diametro massimo e di diametro minimo.

Registrare tutto quanto stampato a video nel file __risultatiSfere.dat__.

## Esercizio 9

Il file __bersagli.dat__ contiene, riga per riga, la descrizione di un numero non precisato di bersagli. Ciascun bersaglio è definito dalla sua posizione sul piano (coppia di valori razionali __float__) e dal suo indice di corazza (valore intero). Un bersaglio con indice di corazza negativo è _distrutto_. Scrivere un programma che, caricati i bersagli, determini:
1. Il numero di bersagli caricati
2. Il numero di bersagli integri e il numero di bersagli distrutti.
3. Scremati dal campione di bersagli quelli distrutti, registri sul file __bersagliOK.dat__ la descrizione dei bersagli integri.






