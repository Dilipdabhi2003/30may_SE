#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class RockPaperScissors 
{
public:
    void playGame() {
        srand(time(0));

        int playerChoice, computerChoice;
        int playerScore = 0, computerScore = 0;

		cout << "\t\t\t*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<< endl;
        cout << "\t\t\t\tWelcome to Rock Paper Scissors!" << endl;
        cout << "\t\t\t*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<< endl;
    
	    string name;
	    cout<<"Enter your Name :"<<endl;
	    cin>>name;
	    
        cout << "\t\t\t*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<< endl;
        cout << "\t\t\t\t\tYour Name is =" <<name<< endl;
        cout << "\t\t\t*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*"<< endl;
    
    

        while (true) {
            displayMenu();
            cout << "Enter your choice (1-3): ";
            cin >> playerChoice;

            if (playerChoice == 4) {
                break;
            }

            computerChoice = generateComputerChoice();
            cout << "Computer chooses: " << convertToChoice(computerChoice) << endl;

            int result = determineWinner(playerChoice, computerChoice);

            if (result == 1) {
                cout << "You win!" << endl;
                playerScore++;
            } else if (result == -1) {
                cout << "Computer wins!" << endl;
                computerScore++;
            } else {
                cout << "It's a tie!" << endl;
            }

            cout << "Player score: " << playerScore << endl;
            cout << "Computer score: " << computerScore << endl;
            cout << "------------------------" << endl;
        }

        cout << "Thanks for playing!" << endl;
    }

private:
    void displayMenu() {
        cout << "Menu:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "4. Quit" << endl;
    }

    int generateComputerChoice() {
        return (rand() % 3) + 1;
    }

    string convertToChoice(int choice) {
        switch (choice) {
            case 1:
                return "Rock";
            case 2:
                return "Paper";
            case 3:
                return "Scissors";
            default:
                return "";
        }
    }

    int determineWinner(int playerChoice, int computerChoice) {
        // Returns 1 if player wins, -1 if computer wins, 0 for a tie
        if (playerChoice == computerChoice) {
            return 0;
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            return 1;
        } else {
            return -1;
        }
    }
};

int main() {
    RockPaperScissors game;
    game.playGame();

    return 0;
}

