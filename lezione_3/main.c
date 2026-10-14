#include <stdlib.h>
#include <stdio.h>

#include "aux.h"

int main(int argc, char *argv[])
{
  if(argc != 3)
  {
    printf("Usage: ./prog <file> <n_triplette>\n");
    return -1;
  }

  int n = atoi(argv[2]);
  tripletta *t = (tripletta *)malloc(n * sizeof(tripletta));
  FILE *fp = fopen(argv[1], "r");

  leggi_triplette(n, t, fp);

  for(int i = 0; i < n; i++)
    printf("tripletta %d: %d, %d, %f\n", i+1, t[i].n1, t[i].n2, t[i].f);


  fclose(fp);

  return 0;

}
