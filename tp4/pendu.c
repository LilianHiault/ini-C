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
  char mystere[] = "coucou";
  int i = 0;
  while (mystere[i] != '\0')
    {
      mystere[i] = toupper(mystere[i]);
      i++;
    }
  strcpy(mot_a_trouver, "COUCOU");
}

void affPendu(char cartoon[][70], int echecs)
{
  printf("%s\n",cartoon[echecs]);
  /* printf("Mot à trouver : %s\n", mot_decouvert); */
  printf("%d échecs.\n\n", echecs);
}

int cDansMot(char c, char mot_a_trouver[])
{
  return strchr(mot_a_trouver, c) != NULL;
}

void devoiler(char * mot_a_trouver, char * mot_decouvert, char c)
{
  int i = 0;
  while(mot_a_trouver[i] != '\0')
    {
      if(mot_a_trouver[i] == c)
	{
	  mot_decouvert[i] = c;
	}
      i++;
    }
}

int gagne(char * mot_decouvert)
{
  return strchr(mot_decouvert, '*') == NULL;
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
  cacher(mot_a_trouver, mot_decouvert);
  char c = 'a';
  int stop = 0;

  int echecs = 0;
  
  while((isalpha(c)) && (echecs < 10) && !stop)
    {
      printf("Mot à trouver : %s\n", mot_decouvert);
      scanf("%c%*c", &c);
      c = toupper(c);
      printf("Vous avez saisi '%c'\n", c);

      if(cDansMot(c, mot_a_trouver))
	{
	  /* si c est dans le mot a trouver
	     devoiler lettres dans mot etoiles
	     afficher nouveau mot etoiles
	     verif victoire */
	  printf("%c appartient au mot\n", c);
	  devoiler(mot_a_trouver, mot_decouvert, c);
	  stop = gagne(mot_decouvert);
	}
      else
	{
	  /* sinon pendu ++ */
	  printf("%c n'appartient pas au mot\n", c);
	  echecs++;
	}
      affPendu(cartoon, echecs);
    }
}
  

int main()
{
  game();
  return 0;
}
