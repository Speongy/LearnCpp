#include <iostream>
#include "ttt.hpp"

using namespace std;

int main()
{
    int win_count = 0;

    int winner;
    int player1 = 0, player2 = 0;

    while (win_count < 3)
    {
        intro();
        is_winner();
        filled();
        take_turn();
        set_position();
        update_board();
        change_player();
        draw();
        if (is_winner())
        {
            cout << "\nWho won? 1 or 2?\n";     //I took the lazy way out
            cin >> winner;

            if (winner == 1)
            {
                player1++;
            }
            else
            {
                player2++;
            }

            cout << "There's a winner!\n";
            win_count++;
            cout << win_count << " out of 3\n";
            cout << "Player 1: " << player1 << "\n";
            cout << "Player 2: " << player2 << "\n";

            if (player1 == 2)
            {
                cout << "Player 1 wins best two out of three!";
                break;
            }
            if (player2 == 2)
            {
                cout << "Player 2 wins best two out of three!";
                break;
            }

            clear_board();
        }
        else if (filled())
        {
            cout << "There's a tie!\n";
            clear_board();
        }
    }
}
