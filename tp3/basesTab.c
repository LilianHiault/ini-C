#include<stdio.h>

#define N 10

int main()
{
  int tab[N];
  int i;
  for(i=0; i < N; i++)
    {
      printf("tab[%d] =\n", i);
      scanf("%d", &tab[i]);
    }
  int somme = 0;
  for(i=0; i<N; i++)
    {
      printf("%d ", tab[i]);
      somme += tab[i];
    }
  printf("\nSomme : %d\n", somme);
  return 0;
}
