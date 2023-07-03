#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "Magic 8-Ball: ";

    srand(time(NULL));              // makes sure our answer is different everytime
    int answer = rand() % 10;       // random num from 0-9

    if (answer == 0)
    {
        cout << "It is certain.";
    }

    else if (answer == 1)
    {
        cout << "Probably idk.";
    }

    else if (answer == 2)
    {
        cout << "Probably not idk.";
    }

    else if (answer == 3)
    {
        cout << "Yes?";
    }

    else if (answer == 4)
    {
        cout << "Yesn't";
    }

    else if (answer == 5)
    {
        cout << "Try again...never";
    }

    else if (answer == 6)
    {
        cout << "How'd you get in my house?!";
    }

    else if (answer == 7)
    {
        cout << "Yeah sure kid";
    }

    else if (answer == 8)
    {
        cout << "uhhhhhh";
    }

    else
    {
        cout << "Very doubtful.";
    }
}