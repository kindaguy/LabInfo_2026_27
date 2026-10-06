# Laboratorio 2: altri comandi shell, git, struttura programma C++, compilatore

In questo laboratorio introduciamo altri comandi di shell e un modo per copiare il materiale presente in questo repository in modo efficace. Analizzeremo la struttura di un programma in C++ e invocheremo il programma "compilatore" per produrre codice eseguibile.

## Esercizio 1 (mkdir)
Il comando __mkdir__ (_make directory_) consente di creare nuove cartelle.
La sintassi è:

__mkdir <nome_cartella>__

dove <nome_cartella> può essere o il nome completo (percorso da root / ) oppure il nome relativo alla working directory.

Usare il comando __mkdir__ per creare una cartella __Informatica_CorsoB__ nella vostra home.

Verificate, dopo aver eseguito il comando, che la cartella sia stata effettivamente creata con il comando __ls__. 

Spostatevi nella cartella __Informatica_CorsoB__.

# Esercizio 2

Il comando __touch__ crea un nuovo file, vuoto. La sintassi è

__touch <nome_file>__

dove, come al solito, <nome_file> può essere il nome completo (percorso / -> file, nome del file incluso) o relativo rispetto alla working directory.

Dopo essersi posizionati nella cartella __Informatica_CorsoB__, create un file dal nome _primoFile.txt_

Verificate la presenza del file con il solito __ls__.

NOTA: i file vengono normalmente creati dalle applicazioni. Questo fatto non cambia. Ora avete uno strumento in più per creare files. Inoltre, l'estensione del file (nel nostro esempio .txt) è usata per identificare il tipo di contenuto di un file: 
- .txt: testo
- .pdf:  file Portable Document Format
- .xlsx: foglio di calcolo Excel
- .docx: docmmento Word
- .jpeg (o .jpg): immagine (compressa)
- .C o .cpp o .cxx:  file sorgente C
- ...ecc...ecc...


## Esercizio 3

Il comando __cp__ effettua la copia di file o cartelle

__cp <nome_file> <destinazione>__

copia il file __nome_file__ nella __destinazione__. Se la destinazione è il nome di una cartella, il file viene copiato con il suo nome. Se la destinazione è un nome di file, allora il file viene copiato e rinomimato.

Per copiare cartelle è necessario specificare l'opzione __-r__ ovvero

__cp -r <nome_cartella> <destinazione>__

La cartella <nome_cartella> e tutto il suo contenuto vengono copiati nella destinazione.

Copiare il file _primoFile.txt__ creato nell'esercizio precedente nella vostra home directory (~).

Copiare quindi il file __primoFile.txt__ nella cartella __Informatica_CorsoB__ nella home con il nome __copiaPrimoFile.txt__.

Creata la cartella __~/Appo__, copiare la cartella __Informatica_CorsoB__ nella cartella __~/Appo__.

Verificate il successo dell'operazione. Eliminate quindi la cartella __~/Appo__ con il comando __rm -r__.

## Esercizio 4

Spostatevi nella cartella __Informatica_CorsoB__. Da qui lanciate il comando:

git clone https://github.com/kindaguy/LabInfo_2025_26.git 

Questo comando copierà il contenuto del repository nella cartella in cui vi trovate. In particolare, nella cartella __Informatica_CorsoB__ sarà ora preseente la cartella __LabInfo_2025_26__.


Da oggi in avanti potrete caricare tutto il materiale a voi fornito sul repostory nella cartella come segue:

1. Collocatevi nella cartella __Informatica_CorsoB/LabInfo_2025_26__
2. scrivete il comando __git pull__

Il comando __git pull__ sincronizzerà il contenuto della cartella __LabInfo_2025_26__ locale (sul computer) col contenuto della cartella remota (per intenderci, quella residente sulle macchine di GitHub).

NOTA: se avete bisogno di usare il materiale (file/cartelle ecc...), non modificate il contenuto di questa cartella, ma fate una copia di quello che vi serve altrove. Altrimenti le cose si complicano.

## Esercizio 5
Nella cartella __Informatica_CorsoB__ create una cartella __Laboratorio02__. Copiate nella cartella __Laboratorio02__ appena creata il file __helloworld.C__ presente nella cartella __LabInfo_2025_26/Lab02_20251007__.





