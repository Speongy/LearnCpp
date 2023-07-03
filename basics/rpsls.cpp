/*Rock Paper Scissors Lizard Spock
User plays against computer

Logic:

Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.

rock paper scissors first and then we aadd in lizards and spocks
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    srand(time(NULL));         // makes sure comp answer is random
    int comp = rand() % 5 + 1; // 1-5 for comp
    int user = 0;

    cout << "================================\n";
    cout << "Rock Paper Scissors Lizard Spock!\n";
    cout << "================================\n";

    cout << "1) Rock\n";
    cout << "2) Paper\n";
    cout << "3) Scissors\n";
    cout << "4) Lizard\n";
    cout << "5) Spock\n";

    cout << "Shoot!\n";
    cout << "User picks: ";
    cin >> user;
    cout << "Comp picks: " << comp << "\n\n";

    if (user == comp)
    {
        cout << "Tie!\n";
    }

    else if (user == 1 && comp == 2)
    {
        cout << "Rock gets covered by paper! \nYou lose!\n";
    }

    else if (user == 1 && comp == 3)
    {
        cout << "Rock obliterates Scissors! \nYou win!\n";
    }

    else if (user == 1 && comp == 4)
    {
        cout << "Rock crushes Lizard! \nYou win!\n";
    }

    else if (user == 1 && comp == 5)
    {
        cout << "Rock gets vaporized by Spock! \nYou lose!\n";
    }

    else if (user == 2 && comp == 1)
    {
        cout << "Paper beats Rock! \nYou win!\n";
    }

    else if (user == 2 && comp == 3)
    {
        cout << "Paper gets cut by Scissors! \nYou lose!\n";
    }

    else if (user == 2 && comp == 4)
    {
        cout << "Paper gets eaten by Lizard! \nYou lose!\n";
    }

    else if (user == 2 && comp == 5)
    {
        cout << "Paper disproves Spock! \nYou win!\n";
    }

    else if (user == 3 && comp == 2)
    {
        cout << "Scissors beats Paper! \nYou win!\n";
    }

    else if (user == 3 && comp == 1)
    {
        cout << "Scissors get smashed by Rock! \nYou lose!\n";
    }

    else if (user == 3 && comp == 4)
    {
        cout << "Scissors cuts off Lizard's head! \nYou win!\n";
    }

    else if (user == 3 && comp == 5)
    {
        cout << "Scissors gets smashed by Spock! \nYou lose!\n";
    }

    else if (user == 4 && comp == 2)
    {
        cout << "Lizard eats Paper! \nYou win!\n";
    }

    else if (user == 4 && comp == 1)
    {
        cout << "Lizard gets crushed by Rock! \nYou lose!\n";
    }

    else if (user == 4 && comp == 3)
    {
        cout << "Lizard gets decapitaed by Scissors! \nYou lose!\n";
    }

    else if (user == 4 && comp == 5)
    {
        cout << "Lizard poisons Spock! \nYou win!\n";
    }

    else if (user == 5 && comp == 2)
    {
        cout << "Spock gets disproven by Paper! \nYou lose!\n";
    }

    else if (user == 5 && comp == 1)
    {
        cout << "Spock vaporizes Rock! \nYou win!\n";
    }

    else if (user == 5 && comp == 4)
    {
        cout << "Spock gets poisoned by Lizard! \nYou lose!\n";
    }

    else if (user == 5 && comp == 3)
    {
        cout << "Spock smashes Scissors! \nYou win!\n";
    }

    else
    {
        cout << "Computer said: are u serious right neow bruh.\n";
    }
}