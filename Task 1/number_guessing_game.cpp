#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    char playAgain;

    do
    {
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "\n=====================================\n";
        cout << "      NUMBER GUESSING GAME\n";
        cout << "=====================================\n";
        cout << "I have selected a number between 1 and 100.\n";
        cout << "Try to guess it!\n";

        while (true)
        {
            cout << "\nEnter your guess: ";
            cin >> guess;

            if (guess < 1 || guess > 100)
            {
                cout << "Please enter a number between 1 and 100.\n";
                continue;
            }

            attempts++;

            if (guess > secretNumber)
            {
                cout << "Too High!\n";
            }
            else if (guess < secretNumber)
            {
                cout << "Too Low!\n";
            }
            else
            {
                cout << "\nCongratulations! You guessed the correct number.\n";
                cout << "Total Attempts: " << attempts << endl;
                break;
            }
        }

        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\nThank you for playing!\n";

    return 0;
}