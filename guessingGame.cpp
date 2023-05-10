#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() 
{
    char answer;
    int guess;
    int attempts = 0;
    srand(time(0));
    int randomNumber = rand()%101;
    bool game = true;
    /*cout << randomNumber << endl;*/

    cout << "Let's play a guessing game?!   Y/n  ";
    cin >> answer;

    if (answer == 'Y'){
        cout << "Guess the number from 0 to 100 that Im thinking right now   ";
        cin >> guess;
    } else if (answer == 'n') {
        cout << "Okay, come play another time";
        return 0;
    }

    while(game == true){
        if (guess == randomNumber) {
            attempts++;
            cout << "Good, you have guessed the number with " << attempts << " attempts" << endl;
            game = false;
        } else if(guess < randomNumber) {
            attempts++;
            cout << "Wrong, your guess is lower than the number i'm thinking   ";
            cin >> guess;
        } else if (guess > randomNumber) {
            attempts ++;
            cout << "Almost there, but the number on my mind is lower than that   ";
            cin >> guess;
    }
    }
}