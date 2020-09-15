#include<stdio.h>

#define N 50

void remplirTab(int tab[], int n)
{
  int i;
  for(i=0; i < n; i++)
    {
      tab[i] = (i % 2 == 0) ? 100 + i : 100 - i;
      /* tab[i] = 100; */
    }
}

void affTab(int tab[], int n)
{
  int i;
  for(i=0; i < n; i++)
    {
      printf("%d ", tab[i]);
    }
  printf("\n");
}

int maxTab(int tab[], int n)
{
  int max = tab[0];
  int i;
  for(i=1; i<n; i++)
    {
      if (tab[i] > max)
	{
	  max = tab[i];
	}
    }
  return max;
}

int minTab(int tab[], int n)
{
  int min = tab[0];
  int i;
  for(i=1; i<n; i++)
    {
      if (tab[i] < min)
	{
	  min = tab[i];
	}
    }
  return min;
}

int sommeTab(int tab[], int n)
{
  int somme = 0;
  int i;
  for(i=0; i<n; i++)
    {
      somme += tab[i];
    }
  return somme;
}

float moyTab(int tab[], int n)
{
  return (float) sommeTab(tab, n) / n;
}

int main()
{
  int tab[N];
  remplirTab(tab, N);
  affTab(tab, N);
  printf("Maximum du tableau : %d\n", maxTab(tab, N));
  printf("Minimum du tableau : %d\n", minTab(tab, N));
  printf("Moyenne du tableau : %f\n", moyTab(tab, N));
  return 0;
}
