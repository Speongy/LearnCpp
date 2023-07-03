/*CODECADEMY TEXT ADVENTURE PROJECT
all ascii art is from https://ascii.co.uk/art
Tree and goblin art are from jgs
weiner dog is from hjw



*/





#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <ctime>
#include <unistd.h>

using namespace std;

int main()
{
    int true_escape = 1;
    while (true_escape == 1)
    {
        int escape = 1;
        while (escape == 1)
        {
            srand(time(NULL));
            int attack = rand() % 20 + 1;
            int sneak = rand() % 20 + 1;
            int greet = rand() % 20 + 1;
            int home = rand() % 20 + 1;

            int goblin = 0, path = 0, left = 0, right = 0, choice = 0;

            string name = "";
            cout << "\n\n               ,@@@@@@@,\n";
            cout << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
            cout << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
            cout << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/888'\n";
            cout << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\8888888'\n";
            cout << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
            cout << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
            cout << "       |o|        | |         | |\n";
            cout << "       |.|        | |         | |\n";
            cout << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

            cout << "Welcome to the Spooky Woods. What is your name traveller: ";
            cin >> name;
            cout << "\nGreetings " << name << ", Please use extreme caution while you explore ahead. Goodbye. For now...\n\n";
            cout << "************************************************\n";
            cout << "The voice disappears and you venture forth.\n";
            cout << "************************************************\n\n";

            cout << "You encounter a goblin. What shall you do?\n";
            cout << "   1) Attack it.\n";
            cout << "   2) Sneak around it.\n";
            cout << "   3) Greet it.\n";
            cout << "   4+) Turn around and go home.\n";
            cin >> goblin;

            if (goblin == 1)
            {
                if (attack <= 2)
                {
                    cout << "You attacked the goblin, but it smelled you from a mile away. It counterattacks and drives it's sword through your chest. You die lol.";
                    break;
                }
                else
                {
                    cout << "The goblin is startled as you slap it's butt, killing it instantly.";
                }
            }

            else if (goblin == 2)
            {
                if (sneak <= 20)
                {
                    cout << "\n             ,      ,\n";
                    cout << "            / (.-""-.) \\ \n";
                    cout << "        |\\  \\/      \\/  /|\n";
                    cout << "        | \\ / =.  .= \\ / |\n";
                    cout << "        \\( \\   o\\/o   / )/\n";
                    cout << "         \\_, '-/  \\-' ,_/\n";
                    cout << "           /   \\__/   \\\n";
                    cout << "           \\ \\__/\\__/ /\n";
                    cout << "         ___\\ \\|--|/ /___\n";
                    cout << "       /`    \\      /    `\\\n";
                    cout << "      /       '----'       \\\n";
                    cout << "The goblin yells, 'IS THAT FEET I SMELL?!?!?!' \nIt locks eyes with you and vanishes. The goblin teleports behind you and chops your feet off. It then disappears into the forest and you bleed out.";
                    break;
                }
                else
                {
                    cout << "The goblin doesn't do anything and you sneak past it.";
                }
            }

            else if (goblin == 3)
            {
                if (greet <= 13)
                {
                    cout << "The goblin says, 'What the duece' and pulls out it's glock. You are then shot 8 times in the chest.";
                    break;
                }
                else
                {
                    cout << "The goblin says, 'oh hey what's up bro?' \nYou two nod at each other and move on.";
                }
            }

            else if (goblin >= 4)
            {
                int run_counter = 0;
                if (home <= 9)
                {
                    cout << "The goblin spots you trying to go home and runs towards you!\n";
                    for (int i = 10; i >= 0; i--)
                    {
                        usleep(100000);
                        cout << "*********************************************************"<< endl;
                        cout <<"\t\t\t"<< i << " meters\n\n";
                        if (i == 0)
                        {
                            cout << "GOTCHA HAHAHAHA!!!\nThe goblin reaches you and does nothing lol see ya\n";
                            exit(1);
                        }
                    }
                }
                else
                {
                    cout << "You make it back home and live your life I guess.\n";
                    exit(1);
                }
            }

            else
            {
                cout << "You just stand there.";
                exit(1);
            }

            cout << "\n\nYou are greeted with a forked path. Which do you take?";
            cout << "\n   1) Left";
            cout << "\n   2) Right\n";
            cin >> path;

            if (path == 1)
            {
                cout << "\nYou take the left path and is greeted by an old man. \n'Spare change,' he says. What do you do?";
                cout << "\n   1) Ew, get away from me!";
                cout << "\n   2) Ok, here you go.\n";
                cin >> choice;

                if (choice == 1)
                {
                    cout << "'Bruh', he says as he pulls out his wand and casts a giant meteor at you.";
                    break;
                }
                else if (choice == 2)
                {
                    cout << " He says, 'Thanks' and disappears. \nYou are then teleported to your destination";
                    exit(1);
                }
                else
                {
                    cout << "'Bro what?' He teleports you to the entrance of the forest.\n";
                    break;
                }
            }

            else if (path == 2)
            {
                cout << "\nYou take the right path and is greeted by an odd child. 'Will you accompany me on my way home? It's this way.\n";
                cout << "   1) Sure, of course!\n";
                cout << "   2) Beat it kid.\n";
                cin >> choice;

                if (choice == 1)
                {
                    cout << "You help the kid find his home and suddenly a very large man grabs you and stabs you 37 times.";
                    break;
                }

                if (choice == 2)
                {
                    cout << "You ignore the kid and walk past them. After about an hour of walking, you arrive at your destination.";
                    exit(1);
                }
            }

            else if (path > 2)
            {
                cout << "The forest says, 'nuh uh' and boots you back to the entrance.";
            }
            else
            {
                cout << "                                                                                   __\n";
                cout << "     ,                                                                           ,\" e`--o\n";
                cout << "    ((                                                                          (  | __,'\n";
                cout << "     \\\\~-----------------------------------------------------------------------' \\_;/\n";
                cout << "     (                   long mode                                                 /\n";
                cout << "     /) .______________________________________________________________________.  )\n";
                cout << "    (( (                                                                      (( (\n";
                cout << "     ``-'                                                                      ``-'\n";
                cout << "The forest gets annoyed and kicks you out.";
                exit(1);
            }
        }
    }
}