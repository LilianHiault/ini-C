#include<stdio.h>

#define N 50

int tab[N];

void remplirTab()
{
  int i;
  for(i=0; i < N; i++)
    {
      tab[i] = (i % 2 == 0) ? 100 + i : 100 - i;
      /* tab[i] = 100; */
    }
}

void affTab()
{
  int i;
  for(i=0; i < N; i++)
    {
      printf("%d ", tab[i]);
    }
  printf("\n");
}

int maxTab()
{
  int max = tab[0];
  int i;
  for(i=1; i<N; i++)
    {
      if (tab[i] > max)
	{
	  max = tab[i];
	}
    }
  return max;
}

int minTab()
{
  int min = tab[0];
  int i;
  for(i=1; i<N; i++)
    {
      if (tab[i] < min)
	{
	  min = tab[i];
	}
    }
  return min;
}

int sommeTab()
{
  int somme = 0;
  int i;
  for(i=0; i<N; i++)
    {
      somme += tab[i];
    }
  return somme;
}

float moyTab()
{
  return (float) sommeTab() / N;
}

int main ()
{
  remplirTab();
  affTab();
  printf("Maximum du tableau : %d\n", maxTab());
  printf("Minimum du tableau : %d\n", minTab());
  printf("Moyenne du tableau : %f\n", moyTab());
  return 0;
}
