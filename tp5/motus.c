#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define N 16
#define M 100
#define T 1000

char mot_a_trouver[M];
char mot_saisi[M];
char mot_decouvert[M];
char mal_place[M];

void motDico()
{
  char dico [][N] = { "AGENT", "AGILE", "AIDER", "BADGE", "BIERE", 
		      "CABLE", "CACHE", "CACAO", "CARTE", "CLEFS",
		      "ECRAN", "GEEEK", "ISIMA", "MULOT", "PUCES", "VIDEO" };
  /* int i; */
  /* for(i=0; i < N; i++) */
  /*   { */
  /*     printf("%s\n", dico[i]); */
  /*   } */
  int motAlea = rand() % N;
  strcpy(mot_a_trouver, dico[motAlea]);
}

void motFichier(char * argv[])
{
  char dico[5][T];
  /* (void) dico; */
  FILE * fichier = fopen(argv[1], "r"); // Ouverture du fichier
  if(fichier)
    {
      int nbLignes = 0;
      int compt = 0;
      int motAlea = 0;
      
      fscanf(fichier, "%d", &nbLignes);
      printf("Il y a %d lignes dans %s\n", nbLignes, argv[1]);
      while(!feof(fichier) && compt < T)
	{
	  fscanf(fichier, "%s", dico[compt]);
	  compt++;
	}
      fclose(fichier);
      /* int i; */
      /* for(i=0; i<(compt - 1); i++) printf("%s\n", dico[i]); */
      motAlea = rand() % compt;
      strcpy(mot_a_trouver, dico[motAlea]);
    }
  else
    {
      perror("Le fichier n'a pas pu être lu");
    }
}

void choixMot(int argc, char * argv[])
{
  if(argc < 2)
    {
      motDico();
    }
  else
    {
      motFichier(argv);
    }
}

void saisirMot()
{
  int i = 0;
  printf("Entrez un mot : ");
  scanf("%s", mot_saisi);
  while (mot_saisi[i] != '\0')
    {
      mot_saisi[i] = toupper(mot_saisi[i]);
      i++;
    }
  printf("Mot entré     : %s\n", mot_saisi);
}

void cacherMot()
{
  int n = strlen(mot_a_trouver);
  int i;
  mot_decouvert[0] = mot_a_trouver[0];
  for(i=1; i<n; i++)
    {
      mot_decouvert[i] = '-';
    }
}

int bonneTaille()
{
  return strlen(mot_a_trouver) == strlen(mot_saisi);
}

int arret(int coups, int coupsMax)
{
  int stop = 0;
  if(!strcmp(mot_a_trouver, mot_saisi))
    {
      printf("Bravo ! Vous avez réussi à trouver %s en %d coups !\n", mot_a_trouver, coups);
      stop = 1;
    }
  else if(coups >= coupsMax)
    {
      printf("Dommage, le mot à trouver était %s en %d coups.\n", mot_a_trouver, coups);
      stop = 1;
    }
  return stop;
}

int cDansMot(char c)
{
  return strchr(mot_a_trouver, c) != NULL;
}

void devoileMot()
{
  int i;
  char c = 'a';
  int k = 0;
  for(i=0; mot_a_trouver[i] != '\0'; i++)
    {
      c = mot_saisi[i];
      if(c == mot_a_trouver[i])
	{
	  mot_decouvert[i] = c;
	}
      else if(cDansMot(c))
	{
	  mal_place[k] = c;
	  k++;
	}
    }
  mal_place[k] = '\0';
}

void verifMot()
{
  if(bonneTaille())
    {
      printf("Le mot est de la bonne taille.\n");
      devoileMot();
    }
  else
    {
      printf("Le mot n'est pas de la bonne taille.\n");
    }
}

void affDecouvert()
{
  printf("Mot à trouver : %s\nMal placées   : %s\n", mot_decouvert, mal_place);
}


void game(int argc, char * argv[]) {

  int coupsMax = 6;
  int coups = 0;

  // Choix du mot à trouver
  choixMot(argc, argv);
  /* printf("Mot choisit   : %s\n\n", mot_a_trouver); */
  cacherMot();

  do
    {
      /* Boucle de jeu */
      affDecouvert();
      saisirMot();
      verifMot();
      coups++;
      printf("Coups joués   : %d/%d\n", coups, coupsMax);
      printf("\n");
    }
  while(!arret(coups, coupsMax));
}

int main(int argc, char * argv[])
{
  /* (void) argc; */
  /* (void) argv; */
  srand(time(NULL));
  game(argc, argv);
  return 0;
}
