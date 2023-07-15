#include <iostream>
#include <string>
#include "functions.hpp"

using namespace std;

int main()
{
    string word = "broccoli";
    string sentence = "broccoli sux. i hate broccoli. i love broccoli. shut it nerd.";

    bleep(word, sentence);

    for (int i = 0; i < sentence.size(); i++)
    {

        std::cout << sentence[i];
    }

    std::cout << "\n";
}
