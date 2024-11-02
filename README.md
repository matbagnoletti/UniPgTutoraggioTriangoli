<h1 align="center">UniPG - Tutoraggio: esercizio triangoli</h1>

<p align="center" style="font-family: monospace">Made by <a href="https://github.com/matbagnoletti">@matbagnoletti</a></p>
<p align="center" style="font-family: monospace">Corso di Programmazione Procedurale I° anno a.a. 2024/2025, <a href="https://www.dmi.unipg.it/didattica/corsi-di-studio-in-informatica/informatica-triennale">UniPG - DMI</a></p>
<p align="center">
    <img src="https://img.shields.io/github/last-commit/matbagnoletti/UniPGTutoraggioTriangoli?style=for-the-badge" alt="Ultimo commit">
    <img src="https://img.shields.io/github/languages/top/matbagnoletti/UniPGTutoraggioTriangoli?style=for-the-badge" alt="Linguaggio">
</p>

## Descrizione
Esercizio di tutoraggio svolto durante il corso di Programmazione Procedurale del primo anno di Informatica presso l'Università degli Studi di Perugia.

## Requisiti
- [gcc](https://www.gcc.gnu.org/) (v13.2.0)

È possibile visualizzare la versione già presente sul proprio dispositivo mediante il seguente comando:
```bash
gcc -v
```

## Richiesta dell'esercizio
Si scriva un programma in linguaggio C che legga da tastiera i valori delle lunghezze dei tre lati di un triangolo (detti A, B e C), e determini (scrivendolo a video):
<ul>
    <li>se il triangolo è equilatero</li>
    <li>se il triangolo è isoscele</li>
    <li>se il triangolo è scaleno</li>
    <li>se il triangolo è rettangolo</li>
</ul>

Prima controllare se le misure dei tre lati ricevuti in input (A, B, C) rappresentano correttamente un triangolo, cioè:
<ul>
    <li>tutti i lati devono avere valori positivi</li>
    <li>ogni lato deve essere minore della somma degli altri due</li>
    <li>ogni lato deve essere maggiore della differenza degli altri due</li>
</ul>

Il file eseguibile della soluzione proposta dovrà presentarsi nel formato `<nomeCognome>`.

## Soluzione proposta
Il programma richiede all'utente di inserire i valori dei tre lati del triangolo e, successivamente, verifica se i valori inseriti rappresentano un triangolo tramite la funzione `isTriangolo()`.
Se i valori sono validi, il programma determina il tipo di triangolo in base ai lati inseriti, avvalendosi dei metodi `tipoTriangolo()` e `isTRettangolo()`.

## Installazione e utilizzo
Per poter utilizzare il programma, è necessario seguire i seguenti passaggi:
1. Effettua il clone della repository con il comando:
   ```bash
   git clone https://www.github.com/matbagnoletti/UniPGTutoraggioTriangoli.git
   ```
   In alternativa, effettua il download del file compresso del progetto ed estrailo in una cartella locale del tuo computer.
2. Nel terminale, spostati nella cartella del progetto:
   ```bash
   cd UniPGTutoraggioTriangoli
   ```
3. Compila il codice sorgente:
   ```bash
    gcc main.c -o [eseguibile] -lm
    ```
4. Esegui il programma:
    ```bash
    ./[eseguibile]
    ```
   

