#include<stdio.h>
#include<string.h>

int compterLettres(char * nom)
{
  int i = -1;
  char c;
  do
    {
      i++;
      c = nom[i];
    }
  while(c != '\0');
  return i;
}

int main()
{
  char prenom[100];
  printf("Bonjour ! Comment t'appelles-tu ?\n");
  scanf("%s", prenom);
  printf("Bienvenue %s\n", prenom);

  printf("Donnez moi un nombre : ");
  int n;
  scanf("%d", &n);
  printf("\n");

  int i;
  for(i=0; i<n; i++) printf("Merci %s\n", prenom);

  printf("Nombre de lettres : %d\n", compterLettres(prenom));

  printf("strlen : %lu\n", strlen(prenom));

  printf("Votre nom ? :\n");
  char nom[100];
  scanf("%s", nom);
  char nomComplet[100];
  strcat(strcat(strcpy(nomComplet, prenom), " "), nom);
  printf("Coucou %s !\n", nomComplet);

  char complet[100];
  n = compterLettres(prenom);
  for(i=0; i<n; i++)
    {
      complet[i] = prenom[i];
    }
  complet[i] = ' ';
  i++;
  int j;
  n = compterLettres(nom);
  for(j=0; j<n; j++)
    {
      complet[j+i] = nom[j];
    }
  printf("Pareil %s !\n", complet); 
  
  return 0;
}
