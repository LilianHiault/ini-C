#include<stdio.h>
#include<stdlib.h>

/* #define N 10 */
/* #define M N */

int ** creePascal(int n, int m)
{
  /* int pascal[N][M]; */
  int i, j;
  int ** pascal = malloc(n * sizeof(int*));
  for(i=0; i<n; i++)
    {
      pascal[i] = malloc(m * sizeof(int));
    }
  return pascal;
}

void remplirPascal(int ** pascal, int n, int m)
{
  int i, j;
  for(i=0; i<n; i++)
    {
      pascal[i][0] = 1;
      pascal[i][i] = 1;
      for(j=1; j<i; j++)
	{
	  pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
	}
    }
}

void aff2D(int** tab, int n, int m)
{
  int i, j;
  for(i=0; i<n; i++)
    {
      for(j=0; j<m; j++)
	{
	  printf("%d ", tab[i][j]);
	}
      printf("\n");
    }
}

int main()
{
  int n;
  printf("Entrez n : \n");
  scanf("%d", &n);
  printf("Triangle de pascal d'ordre %d\n", n);
  int ** pascal = creePascal(n, n);
  remplirPascal(pascal, n, n);
  aff2D(pascal, n, n);
  free(pascal);
  return 0;
}
