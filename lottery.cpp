#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int SIZE = 5;

    int winningDigits[SIZE];
    int player[SIZE];

    int matches = 0;

    // Seed the random number generator once.
    srand(static_cast<unsigned int>(time(0)));

    // Generate five random winning digits from 0 through 9.
    for (int i = 0; i < SIZE; i++)
    {
        winningDigits[i] = rand() % 10;
    }

    // Ask the player to enter five digits.
    cout << "Enter five lottery digits (0-9):" << endl;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter digit " << i + 1 << ": ";
        cin >> player[i];
    }

    // Compare digits at corresponding positions.
    for (int i = 0; i < SIZE; i++)
    {
        if (winningDigits[i] == player[i])
        {
            matches++;
        }
    }

    // Display the winning digits.
    cout << "\nWinning digits: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << winningDigits[i] << " ";
    }

    // Display the player's digits.
    cout << "\nPlayer digits: ";

    for (int i = 0; i < SIZE; i++)
    {
        cout << player[i] << " ";
    }

    cout << endl;

    // Display the number of matching positions.
    cout << "Number of matches: " << matches << endl;

    return 0;
}
