
void initializeBlankString(int lenghth,char*string);

//for space in strings
void printWithSpaces(const char*string);

//function to take two strings and run untile both equal to '\0'

int revealGuessedLetter(const char*solution,char*revealed,char guessedletter);


//compare two strings
int checkGuess(const char*solution,const char*revealed);


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
