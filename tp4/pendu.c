#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define N 100

void cacher(char * mot_a_trouver, char * mot_etoile)
{
  int n = strlen(mot_a_trouver);
  int i;
  for(i=0; i<n; i++)
    {
      mot_etoile[i] = '*';
    }
}

void choixMot(char * mot_a_trouver)
{
  strcpy(mot_a_trouver, "coucou");
}

void affPendu(char ** cartoon, int echecs)
{
  printf("%s\n", cartoon[9 - echecs]);
}

void game()
{
  char cartoon [10][70] = {
			   "\n\n\n\n\n\n_______\n",
			   "\n   |\n   |\n   |\n   |\n   |\n___|___\n",
			   "\n   /-----\n   |\n   |\n   |\n   |\n___|___\n",
			   "\n   /-----\n   |    |\n   |\n   |\n   |\n___|___\n",
			   "\n   /-----\n   |    |\n   |    O\n   |\n   |\n___|___\n",
			   "\n   /-----\n   |    |\n   |    O\n   |    |\n   |   \n___|___\n",
			   "\n   /-----\n   |    |\n   |    O\n   |   /|\n   |\n___|___\n",
			   "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |\n___|___\n",
			   "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /\n___|___\n",
			   "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /|\n___|___\n"
  };

  printf("Vous devez retrouver le mot mytère avant de finir pendu !\nSaisissez un caractère autre qu'une lettre pour quitter.\n");
  char mot_a_trouver[N];
  choixMot(mot_a_trouver);
  
  char mot_decouvert[N];
  char mot_etoile[N];
  cacher(mot_a_trouver, mot_etoile);
  strcpy(mot_decouvert, mot_etoile);
  char c = 'a';

  int echecs = 1;
  
  do
    {
      printf("Mot à trouver : \n%s\n", mot_decouvert);
      scanf("%c%*c", &c);
      printf("Vous avez saisi '%c'\n", c);
      if(0)
	{
      /* si c est dans le mot */
	}
      else
	{
      /* sinon pendu ++ */
	  affPendu(cartoon, echecs);
	}
    }
  while(isalpha(c));
}
  

int main()
{
  game();
  return 0;
}
