#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int guessNumber()
{
  /* Retourne le nombre à deviner */
  return rand() % 101;
}

int askNumber()
{
  int nb = -1;
  printf("Entrez un nombre :\n");
  scanf("%d", &nb);
  return nb;
}

int checkVictory(int answer, int nb, int maxMoves, int moves)
{
  /* Vérifie les conditions de victoire. */
  int playing = 1;
  if(nb == answer && moves < maxMoves)
    {
      printf("Bravo ! Vous avez trouvé %d, en %d coups !\n", answer, moves);
      playing = 0;
    }
  else if (moves >= maxMoves)
    {
      printf("Vous n'avez pas trouvé %d en %d coups ou moins.\n", answer, maxMoves);
      playing = 0;
    }
  return playing;
}

void helpPlayer(int answer, int nb)
{
  /* Donnes des indications aux joueur. */
  if(nb > answer)
    {
      printf("Le nombre saisi est trop grand !\n");
    }
  else if(nb < answer)
    {
      printf("Le nombre saisi est trop petit !\n");
    }
}

int game()
{
  /* Boucle principale de jeu */
  int maxMoves = 15;
  int moves = 1;
  int answer = guessNumber();    
  int nb;
  int playing = 1;
    
  printf("Un nombre a été choisit au hasard, à vous de le retrouver en un nombre de coups limité :\n");
  scanf("%d", &maxMoves);

  /* printf("Le nombre à deviner est : %d.\n", answer); */
  
  do
    {
      nb = askNumber();
      helpPlayer(answer, nb);
      playing = checkVictory(answer, nb, maxMoves, moves);
      moves++;
    }
  while(playing);
  return 0;
}

int main()
{
  srand(time(NULL));
  game();
  return 0;
}
