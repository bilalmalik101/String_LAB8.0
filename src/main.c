/**
 * A game where the user has N chances to guess a random word pulled
 * from a file before they lose, one letter at a time.
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "gameFunctions.h"

int main(int argc, char **argv) {
  char guessWords[50][25];

  FILE *inp = fopen("data/dictionary.txt", "r");

  // reads in all words from dictionary into the guessWords array
  int counter = 0;
  while (fscanf(inp, "%s", guessWords[counter]) != EOF) {
    counter++;
  }

  // Gets a random number between 0 abd counter to use for an index
  srand(time(NULL));
  int stringNumber = rand() % counter;

  // Starts the game
  startGame(guessWords[stringNumber]);
  int lenghth=10;
  char string[lenghth+1];
  initializeBlankString(lenghth,string);
  printf("initialized string= %s\n",string);
  printWithSpaces(string);
  const char*solution="dinosaur";
  char revealed[]="_____";
  char guessedletter='a';
  checkGuess(solution,revealed);

  return 0;
}
