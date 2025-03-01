#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int generateNumber() {
    srand(static_cast<unsigned int>(time(0)));
    return rand() % 100 + 1;
}

int getPlayerGuess() {
    int guess;
    cout << "What do you think the number is? ";
    cin >> guess;
    return guess;
}

void printAnswer(int guess, int randomNumber, int attempts, int low, int high) {
    if (guess == randomNumber) {
        cout << "Congrats! You guessed the number in " << attempts << " attempts." << endl;
    }
    else if (guess > randomNumber) {
        cout << "Your guess is too high." << endl;
    }
    else {
        cout << "Your guess is too low." << endl;
    }

    if (guess != randomNumber) {
        int suggestedGuess = low + (high - low) / 2;
        cout << "Hint: Using binary search, you might want to try " << suggestedGuess << " next." << endl;
    }
}

int main() {
    int randomNumber = generateNumber();
    int guess = 0;
    int attempts = 0;
    int low = 1;
    int high = 100;

    cout << "Welcome to the guess game!!" << endl;

    while (true) {
        guess = getPlayerGuess();
        attempts++;

        if (guess == randomNumber) {
            printAnswer(guess, randomNumber, attempts, low, high);
            break;
        }
        else if (guess > randomNumber) {
            high = guess - 1;
        }
        else if (guess < randomNumber) {
            low = guess + 1;
        }

        printAnswer(guess, randomNumber, attempts, low, high);
    }

    return 0;
}
