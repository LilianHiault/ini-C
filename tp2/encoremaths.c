#include<stdio.h>

int getn()
{
  int n = 0;
  printf("n = ");
  scanf("%d", &n);
  return n;
}
  

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
  for(i = 1; i <= 12; i++)
    {
      for(j = 1; j <= 12; j++)
	{
	  printf("%d * %d = %d\n", i, j, i * j);
	}
      printf("\n");
    }
}
      

int main() {
  printf("Entrez un nombre en 0 et 4 :\n0 - Afficher les n premiers entiers\n\
1 - Afficher les carrés des entiers\n2 - Afficher la somme des n^2 entiers\n\
3 - Afficher la somme des 1/n^2\n4 - Afficher les tables de multiplications\n");
  int menu = 0;
  scanf("%d", &menu);
  switch(menu)
    {
    case 0 :
      affEntiers(getn());
      break;
    case 1 :
      affCarres(getn());
      break;
    case 2 :
      printf("%d\n", sommeCarres(getn()));
      break;
    case 3 :
      printf("%f\n", sommeDivN(getn()));
      break;
    case 4 :
      affTables();
      break;
    default :
      printf("Nombre invalide\n");
    }
  return 0;
}
