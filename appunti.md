# Lezione 1

Dovrebbe essere semplicemente una lezione di ripasso, qundi è probabile che sia molto vuota, l'unica cosa che forse scriverò è il `makefile`.

#### All'esame

Si tratta di un singolo esercizio scritto, in cui bisogna scrivere delle definizioni di strutture dati, al massimo tre/quattro, e poi il prototipo di una determinata funzione, oltre ad una spiegazione di cosa farebbe quella funzone su quegli input. Pensato per occupare circa un quarto d'ora, niente di più.

#### Convenzioni durante gli esercizi

Per evitare problemi non aderenti allo standard `C90` noi nel nostro `makefile` useremo delle opzioni del genere:

``` 
    gcc -o prog programma.c -Wall -ansi -pedantic
```

# Lezione 3

Non c'è molto da dire, semplicemente che per quanto riguarda le strutture dati (all'esame bisognerà scrivere proprio delle struct), bisogna usare degli operatori per l'accesso ai membri della struttura, il punto e la freccia, ad es p.x e p->x; chiaramente non sono la stessa cosa e bisogna far attenzione (sincero per ora mai imparata sta cosa)

## Differenza tra operatori di accesso

Il punto accede al membro di una struttura, semplicemente, mentre la freccia serve per la manipolazione di puntatori, quindi bisogna usarla quando noi non abbiamo creato una struttura di un certo tipo, bensì quando è stato creato un puntatore alla struttura

### Esempio
```c
struct utente
{
    int id;
    char nome[BUFSIZ];
}

utente p1;
p1.id = 1;
strcpy(p1.nome, "Adriano");

utente *p;
p2->id = 2;
strcpy(p2->nome, "Alice");
```

Speriamo che detto così si capisca bene, perchè è stra importante.
