# Laboratorio 6: allocazione dinamica della memoria, riferimenti, t-uple.

Adesso sappiamo che le funzioni/procedure che hanno parametri di tipo array stanno usando, in realtà, puntatori.

Quindi un funzione 

__float media(float v[], int n)__

è equivalente a

__float media(float *v, int n)__

Al parametro formale __v__ viene assegnato, in fase di chiamata, l'indirizzo di partenza del vettore passato come parametro attuale. Poi l'esecutore, conoscendo il tipo di dato contenuto nell'array (__float__) riesce ad indirizzare/accedere gli/agli elementi dell'array. 


## Esercizio 1

Il file __votiZoppi.dat__ contiene un numero non precisato di valori interi, disposti uno per riga. Scrivere un programma che, una volta contati i dati presenti sul file, allochi dinamicamente un vettore della dimensione esatta per contenerli tutti e carichi i valori presenti sul file nell'array.


## Esercizio 2

Consideriamo il dati caricati nell'Esercizio 1. Una volta contati i voti validi, ovvero compresi tra 18 e 31 (estremi inclusi), allocare dinamicamente un array di dimensione pari al numero voti validi. Ricopiare in questo nuovo array tutti e soli voti validi. Stampare quindi sul file __votiOK.dat__
1. Un intero, che indichi in numero di voti presenti sul file
2. I voti validi, uno per riga

NOTA: per ragioni tecniche, inserite uno spazio, o un "a capo" dopo l'ultimo voto scritto su file. Ricordatevi inoltre di cancellare gli array allocati dinamicamente quando non servono più (in questo caso prima che il programma termini).

## Esercizio 3
Scrivere una procedura

__void scambia(float & a, float & b)__

 che, presi in ingresso due riferimenti a __float__ scambi il contenuto dei due parametri attuali. 

Verificate il corretto funzionamento della procedura.

## Esercizio 4

Scrivete una funzione che, preso in ingresso il nome di un file (vi spiego io come fare) che contenga dati interi nel formato dell'esercizio 2 (ovvero un numero intero che indica il numero di dati e i dati veri e propri):
1. Carichi i dati in un array allocato dinamicamente. 
2. Restituisce l'indirizzo dell'array (tipo di ritorno __int *__) 
3. Esporta il numero di interi caricati usando un parametro di tipo riferimento ad intero (__int &__ ).

La signature della funzione sarà quindi:

__int * caricaDatiFile(const char nomefile[], int &ndati)__

Il programma che chiama la funzione dovrà poi proseguire calcolando la media aritmetica e la deviazione standard dei voti, il voto massimo, il voto minimo e  poi salvare sul file __analisi.dat__, corredato dalle opportune didascalie:

1. Il numero di dati caricati
2. La media dei voti
3. La deviazione standard dei voti
4. Il voto massimo
5. Il voto minimo

## Esercizio 5

Definita la t-upla 

<b>struct complesso{
    double re;
    double im;
}</b>

scrivere un programma che, lette da tastiera la parte reale e la parte immaginaria del numero complesso
1. Determini il modulo
$ |c| = \sqrt{c.re^2 + c.im^2}$
2. $arg(c) = arctan(c.re/c.im)$
2. Determini e registri il complesso coniugato
$c^* = c.re - c.im$

in una variabile  __complesso cdag__. 

## Esercizio 6
Il file __complessi.dat__ contiene un numero non precisato di valori complessi. Su ogni riga compariono due valori: il primo indica la parte reale del numero, il secondo la parte immaginaria. Scrivere un programma che:

1. Conti, e stampi a video, il numero $n$ di numeri complessi descritti sul file.
2. Carichi i numeri complessi in un vettore di __complesso__ allocato dinamicamante di dimensione $n$.
3. Stampi a video i moduli dei numeri complessi caricati.
4. Stampi a video i valori complessi di modulo massimo e minimo.


## Esercizio 7
Scrivere le funzioni:
- Appendi
- Inserici in posizione indicata (senza rispettare ordine relativo elementi)
- Inserici in posizione indicata (rispettando ordine relativo elementi)
- Rimuovi elemento in posizione indicata (senza rispettare ordine relativo elementi)
- Rimuovi elemento in posizione indicata (rispettando ordine relativo elementi)
- Ricerca elemento (attenzione: per ragioni numeriche, due numeri complessi con campi rappresentati come __double__ sono uguali se la loro parte reale e la loro parte immaginaria distano, entrambe, meno di $10^{-17}$).

NOTA: non dovete partire da zero: avete già pensato a quasi tutto quando avete implementato le stesse operazioni per array di interi.