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

Sostanzialmente scrivere `p->id`è la stessa cosa di scrivere `*(p.id)`, o qualcosa del genere.

# Lezione 4

È' stata saltata

# Lezione 5

Lezione più leggera, ma anche più complessa, rip.

Prima cosa da fare all'esame: individuare la chiave e l'item come strutture dati; mi sa che è importante definire una struttura dati anche per la chiave, in quanto essa può effettivamente essere composta da più di un elemento (si veda la chiave nome/cognome).

Nelle slides per la soluzione dell'esercizio precedente il prototipo è `int list_search(itemlist* head, key k, item* res)`, questo ultimo parametro formale serve perché è il modo con cui noi diamo ulteriori "valori di ritorno", qualsiasi cosa ciò voglia dire.

Un "consiglio": è più comodo, nella definizione delle funzioni, assumere che eventuali elementi della struttura dati siano passati in input, anzichè chiederli all'interno della funzione stessa, alleggerisce il tutto. 

E' un *plus* che si aggiunga (anche nella spiegazione della funzione, non solo dell'implementazione, che tanto all'esame non c'è) anche i controlli vari, ad esempio il controllo del successo dell'allocazione, se appunto si alloca dinamicamente qualcosa.

All'esame si può ovviamente fare riferimento a strutture dati già viste in classe, semplifica un po' il tutto perché non è necessario scrivere in `c` la definizione, ma va solo spiegata, si risparmia tempo.

Ed ora passiamo al *core* della lezione.

## Struttura dati pila (`stack`)

Si tratta di una struttura dati che in sostanza descrive un insieme dinamico, con operazioni su una sola estremità (già vista al corso di Programmazione); ha una politica `LIFO`, è possibile inoltre osservare solo l'ultimo elemento, il resto no, bisogna togliere tutti quelli prima. Si può immaginare come una pila di libri, per consultarne uno in mezzo bisogna togliere tutti quelli prima, semplice.

#### Operazioni

* `Empty(S)`: restituisce `true` se la pila è vuota, `false` altrimenti.
* `Push(S, u)`: aggiunge `u` come elemento di testa di `S`.
* `Pop(S)`: elimina da `S` l'elemento di testa, e lo restituisce.
* `Top(S)`: restituisce l'elemento di testa di `U`.

#### implementazione in `C`

Concettualmente è abbastanza semplice: possiamo appoggiarci ai concetti della `linked list` (a singola concatenazione), con la differenza che le operazioni di inserimento, cancellazione si applicano *solo al primo elemento*; quindi è anche più semplice della lista definita in precedenza (per ora).

L'unica differenza grossa è la `pop`, perché è una `delete` abbastanza modificata.

Nella definizione della struttura dati ci stiamo in realtà appoggiando pesantemente alla struttura dati `itemlist`, vista nella lezione precedente (non da me per ora); infatti una pila si può definire semplicemente in questo modo:
```> [!CAUTION]
struct pila
{
  itemlist* head;
  /* eventualmente la size */
};
typedef struct pila pila;
```
A sua volta scriviamo anche la struttura cui ci appoggiamo:
```> [!CAUTION]
struct itemlist
{
  item dati;
  struct itemlist* next;
}
typedef struct itemlist itemlist
```
Non scriverà anche la struttura `item`, basta solo dire che è una struct che contiene il dato chiave e tutti i dati satellite.

Nei vari file `.c` che sono stati forniti a lezione ci sono tutte le implementazioni dle caso, che vanno studiate abbastanza bene.

##### Per gli esercizi

Devo capire il secondo esercizio, il quale è un problema noto soprattutto in ambito economico, devo prima di tutto capire che cazz significa, poi fare sta roba.

#### Relazione

Deve *in primis* riguardare la traccia dell'esercitazione, c'è una parte facoltativa per quanto riguarda la correttezza dell'algo, e tale dimostrazione si fa per assurdo.



