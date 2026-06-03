#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMenu()
{
    cout << "\n===== ROCK PAPER SCISSORS =====\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";
}

string getChoiceName(int choice)
{
    switch(choice)
    {
        case 1: return "Rock";
        case 2: return "Paper";
        case 3: return "Scissors";
        default: return "Invalid";
    }
}

int determineWinner(int player, int computer)
{
    if(player == computer)
        return 0;

    if((player == 1 && computer == 3) ||
       (player == 2 && computer == 1) ||
       (player == 3 && computer == 2))
        return 1;

    return -1;
}

int main()
{
    srand(time(0));

    string playerName;
    int playerChoice;
    int computerChoice;
    int result;
    char playAgain;

    int playerScore = 0;
    int jarvisScore = 0;

    cout << "=====================================\n";
    cout << "   ROCK PAPER SCISSORS VS JARVIS\n";
    cout << "=====================================\n";

    cout << "Enter your name: ";
    getline(cin, playerName);

    cout << "\nWelcome, " << playerName
         << "! Prepare to face JARVIS.\n";

    do
    {
        displayMenu();

        cout << "\n" << playerName
             << ", enter your choice (1-3): ";
        cin >> playerChoice;

        if(playerChoice < 1 || playerChoice > 3)
        {
            cout << "Invalid choice! Try again.\n";
            continue;
        }

        computerChoice = rand() % 3 + 1;

        cout << "\n" << playerName
             << " chose: "
             << getChoiceName(playerChoice);

        cout << "\nJARVIS chose: "
             << getChoiceName(computerChoice)
             << endl;

        result = determineWinner(playerChoice,
                                 computerChoice);

        if(result == 1)
        {
            cout << "\n " << playerName
                 << " wins this round!\n";
            playerScore++;
        }
        else if(result == -1)
        {
            cout << "\n JARVIS wins this round!\n";
            jarvisScore++;
        }
        else
        {
            cout << "\n⚖ It's a draw!\n";
        }

        cout << "\n===== SCOREBOARD =====\n";
        cout << playerName << ": "
             << playerScore << endl;

        cout << "JARVIS: "
             << jarvisScore << endl;

        cout << "\nPlay Again? (Y/N): ";
        cin >> playAgain;

    }
    while(playAgain == 'Y' ||
          playAgain == 'y');

    cout << "\n=====================================\n";
    cout << "           FINAL RESULTS\n";
    cout << "=====================================\n";

    cout << playerName << ": "
         << playerScore << endl;

    cout << "JARVIS: "
         << jarvisScore << endl;

    if(playerScore > jarvisScore)
    {
        cout << "\n Congratulations "
             << playerName
             << "! You defeated JARVIS!\n";
    }
    else if(jarvisScore > playerScore)
    {
        cout << "\n JARVIS has defeated "
             << playerName
             << "!\n";
    }
    else
    {
        cout << "\n⚖ The battle ended in a draw!\n";
    }

    cout << "\nThank you for playing!\n";

    return 0;
}