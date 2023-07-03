#include <iostream>
using namespace std;

int main()
{
    int gry = 0, huff = 0, raven = 0, slyt = 0;
    int ans1, ans2, ans3, ans4;

    cout << "The Sorting Hat Quiz!\n";

    // Question 1
    cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
    cout << " 1) The Good\n";
    cout << " 2) The Great\n";
    cout << " 3) The Wise\n";
    cout << " 4) The Bold\n";
    cout << "Hmm I pick: ";

    cin >> ans1;

    if (ans1 == 1)
    {
        huff = huff + 1;
    }
    else if (ans1 == 2)
    {
        slyt = slyt + 1;
    }
    else if (ans1 == 3)
    {
        raven = raven + 1;
    }
    else if (ans1 == 4)
    {
        gry = gry + 1;
    }
    else
    {
        cout << "Invalid choice muggle.\n";
    }

    // Question 2
    cout << "Q2) Dawn or Dusk?\n\n";
    cout << " 1) Dawn\n";
    cout << " 2) Dusk\n";
    cout << "Hmm I pick: ";

    cin >> ans2;

    if (ans2 == 1)
    {
        raven = raven + 1;
        gry = gry + 1;
    }
    else if (ans2 == 2)
    {
        slyt = slyt + 1;
        huff = huff + 1;
    }
    else
    {
        cout << "Invalid choice muggle.\n";
    }

    // Question 3
    cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
    cout << " 1) The violin\n";
    cout << " 2) The trumpet\n";
    cout << " 3) The piano\n";
    cout << " 4) The drum\n";
    cout << "Hmm I pick: ";

    cin >> ans3;

    if (ans3 == 1)
    {
        slyt = slyt + 1;
    }
    else if (ans3 == 2)
    {
        huff = huff + 1;
    }
    else if (ans3 == 3)
    {
        raven = raven + 1;
    }
    else if (ans3 == 4)
    {
        gry = gry + 1;
    }
    else
    {
        cout << "Invalid choice muggle.\n";
    }

    // Question 4
    cout << "Q4) Which road tempts you most?\n\n";
    cout << " 1) The Wise, sunny lane\n";
    cout << " 2) The narrow, dark, lantern-lit alley\n";
    cout << " 3) The twisting, leaf-strewn path through woods\n";
    cout << " 4) The cobbled street lined (ancient buildings)\n";
    cout << "Hmm I pick: ";

    cin >> ans4;

    if (ans4 == 1)
    {
        huff = huff + 1;
    }
    else if (ans4 == 2)
    {
        slyt = slyt + 1;
    }
    else if (ans4 == 3)
    {
        gry = gry + 1;
    }
    else if (ans4 == 4)
    {
        raven = raven + 1;
    }
    else
    {
        cout << "Invalid choice muggle.\n";
    }

    string house;
    int max = 0;

    if (gry > max)
    {
        max = gry;
        house = "Gryffindor";
    }

    if (huff > max)
    {
        max = huff;
        house = "Hufflepuff";
    }

    if (raven > max)
    {
        max = raven;
        house = "Ravenclaw";
    }

    if (slyt > max)
    {
        max = slyt;
        house = "Slytherin";
    }
    // cout << gry << endl << huff << endl << raven << endl << slyt << endl;
    cout << house << "!\n";
}