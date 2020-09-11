#include<stdio.h>

void affEntiers(int n)
{
  int i;
  for(i = 0; i < n + 1; i++)
    {
      printf("%d\n", i);
    }
}

void affCarres(int n)
{
  int i;
  for(i = 0; i < n + 1; i++)
    {
      printf("%d\n", i * i);
    }
}

int sommeCarres(int n)
{
  int somme = 1;
  int i;
  for(i = 1; i < n * n; i++)
    {
      somme += i;
    }
  return somme;
}

float sommeDivN(int n)
{
  float somme = 0;
  int i;
  for(i = 1; i < n; i++)
    {
      somme += 1.0 / (i * i);
    }
  return somme;
}

void affTables()
{
  int i, j;
  i = j = 0;
  for(i = 1; i < 12; i++)
    {
      for(j = 1; j<12; j++)
	{
	  printf("%d * %d = %d\n", i, j, i * j);
	}
      printf("\n");
    }
}
      

int main() {
  /* int n = 0; */
  /* printf("n = "); */
  /* scanf("%d", &n); */
  /* affEntiers(n); */
  /* affCarres(n); */
  /* printf("%d\n", sommeCarres(10)); */
  /* printf("%f\n", sommeDivN(n)); */
  affTables();
  return 0;
}
