#include <stdlib.h>
#include <stdio.h>

#include "aux.h"


void leggi_triplette(int n, tripletta *t, FILE *f)
{
  for(int i = 0; i < n; i++)
  {
    printf("Sto provando a salvare la riga %d di triplette\n", i);
    if((fscanf(f, "%u %u %f", &t[i].n1, &t[i].n2, &t[i].f)) == EOF)
    {
      printf("Errore: si è arrivati alla fine del file prima del previsto!\n");
      return;
    }
  }
  printf("Triplette salvate correttamente\n");
}
