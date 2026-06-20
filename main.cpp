#include <iostream>

using namespace std;

int main()
{
    const string CORRECT_PASSWORD = "UMT_Lahore  ";
    string userGuess;
    int attempts = 0;
    bool loginPassed = false;

    do {
        cout << "Enter your secret key password: ";
        cin >> userGuess;
        attempts++;

        if (userGuess == CORRECT_PASSWORD) {
            cout << "Access Granted! Welcome back.\n";
            loginPassed = true;
            break;
        } else {
            cout << "Incorrect credentials. Attempts remaining: " << (3 - attempts) << "\n";
        }

    } while (attempts < 3);

    if (!loginPassed) {
        cout << "Too many failed attempts. Device locked.\n";
    }
    return 0;
}
