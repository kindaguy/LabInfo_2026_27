# Laboratorio 2: selezione, iterazione; overflow e perdita di precisione.

In questo laboratorio scriveremo alcuni semplici programmi in C++. 

## Ricordate
- compilare: __g++ `<nomefilesorgente> ` -o `<nomefileeseguibile> `__
- eseguire:` ./<nomefileeseguibile> `

Niente spazi tra . e / e tra / e monefile
- convenzionalmente il file sorgente si indica con estensione .C oppure .cpp oppure .cxx. Questo consente, tra l'altro, anche all'editor (VSCode) di inferire la tipologia di contenuto del file e evidenziare la sintassi.

__NOTA 1:__ Nella cartella troverete il file __helloworld.C__ che potete usare come modello per iniziare a scrivere codice

__NOTA 2:__ alcuni degli esercizi proposti sono già stati discussi a lezione.

## Esercizio 1
Scrivere un programma che, letti in ingresso due valori interi positivi _a_ e _b_, verificato che _a >=0 and b > 0 stampi a video il quoziente _a/b_ e il resto _a%b_ della divisione euclidea tra _a_ e _b_. Se i valori in input non fossero positivi, il programma dovrà stampare a video il messaggio "Almeno uno dei valori non è positivo"; se il denominatore fosse ==0 il programma dovrà stampare il messaggio "Divisione per zero non ammessa".

NOTA: 
- uno dei due valori non è positivo se _(a< 0 or b<0)_. Ve lo dico in caso servisse.

## Esercizio 2
Scrivere un programma che, letti in ingresso due valori interi positivi _a_ e _b_, verificato che _a >=0 and b > 0_ calcoli il massimo comun divisore (MCD) tra _a_ e _b_.

__NOTA:__ avete il diagramma di flusso sulle slide. Traducetelo nei costrutti opportuni.

## Esercizio 3
Scrivere un programma che determini la media aritmetica di una sequenza di valori interi diversi da zero inserita da tastiera e terminata dal valore sentinella 0.

## Esercizio 4
Determinare la media aritmetica di una sequenza non vuota di valori interi relativi. Il programma dovrà chiedere all'utente se vuole continuare ad inserire valori. Una sequenza non vuota contiene almeno un valore. L'utente può dire che vuole proseguire inserendo il carattere 'y' e un carattere diverso da 'y' altrimenti. Attenzione dovete leggere un valore di tipo carattere da tastiera...

## Esercizio 5
Come esercizio 4, ma questa volta il programma deve chiedere prima quanti valori l’utente vuole inserire, poi leggere i valori e calcolare la media. Che cosa cambia rispetto all’esercizio precedente?

## Esercizio 6
1. Scrivere un programma che, letto da tastiera un numero intero, stampi a video il numero successivo e il numero precedente a quello fornito in ingresso.
1. Immettete come input 2147483647. Sommate 1, registrate il valore ottenuto nella variabile intera __int c__ e stampate il risultato.
1. Sottraete 1 a __c__ e stampate il risultato.



## Esercizio 7
Scrivere un programma che legga in ingresso due numeri interi e li memorizzi nelle variabili __int a__ e __int b__ rispettivamente.

Stampare a video __a+b__, __a-b__, __a*b__ e __a/b__. Cosa osserviamo? 
Provate poi a stampare il risultato delle seguenti operazioni:
1. (1.0*a)/b
2. 1.0*(a/b)
3. a/(1.0*b)
Cosa osservate?

## Esercizio 8

Predisposta una variabile di tipo carattere `char c`, leggere da tastiera un carattere e:
- Se il carattere è un carattere alfabetico "standard" minuscolo (lettera da a a z) stampare il corrispondente carattere maiuscolo.
- Se il carattere è un carattere alfabetico "standard" maiuscolo (lettera da A a Z), stampare il corrispondente carattere minuscolo.
- Se il carattere non è un carattere alfabetico "standard" maiuscolo/minuscolo, stampare a video il messaggio "non posso".

NOTA: fare riferimento alla tabella  [tabella ASCII](https://www.w3schools.com/charsets/ref_html_ascii.asp) per determinare la natura dei caratteri. 

## Esercizio 9

La serie armonica:

$\sum_{n=1}^\infty \frac{1}{n}$

è divergente: la succcessione delle somme parziali $s_k = \sum_{n=1}^k \frac{1}{n} \rightarrow \infty$ quando $k \to \infty$. Verificare che la succcessione delle somme parziali, se implementata in C++ con $s_k$ memorizzato in un `float` converge (o, come mi piace dire, è "praticamente convergente").

A tal fine potrebbe essere utile:

1.  Predisporre una variabile `float somma = 0.f`. 
2. Usare una variabile `int val`, inizialmente =1
3. Usare un ciclo `while` precondizionale o postccondizionale con 
-  condizione di permanenza nel ciclo `somma + 1.f/val == somma`
- `val` incrementato di uno ad ogni iterazione del ciclo.

Quando avviene la convergenza? Perche'?