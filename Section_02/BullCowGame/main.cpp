#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
void PrintBack(string);
bool AskToPlayAgain();

int main() 
{
	PrintIntro();
	PlayGame();
	AskToPlayAgain();
	return 0;
}


// game introduction
void PrintIntro() 
{
	constexpr int WORD_LENGTH = 5;
	cout << "Welcome to Bulls and Cows" << endl;
	cout << "Try to guess " << WORD_LENGTH << " letters isogram. It's funny game!\n";
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_GUESSES = 5;
	for (int count = 1; count <= NUMBER_OF_GUESSES; count++) {
		string Guess = GetGuess();
		PrintBack(Guess);
	}
}

// take the guess from player
string GetGuess()
{
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);
	return Guess;
}

// Tell user his guess
void PrintBack(string Guess) 
{
	cout << "Your guess was: " << Guess << endl;
	cout << endl;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again? ";
	string Answer = "";
	getline(cin, Answer);
	return (Answer[0] == 'y' || Answer[0] == 'Y') ;
}
