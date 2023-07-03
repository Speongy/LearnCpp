#include <iostream>

// Define is_palindrome() here:
std::string is_palindrome(std::string text)
{
    std::string reverse = "";

    for (int i = text.size() - 1; i >= 0; i--)
    {
        reverse += text[i];
    }

    if (reverse == text)
    {
        return reverse + " is a palidrome.\n";
    }
    
    return text + " is not a palidrome.\n" + "This is what your word in reverse is: " + reverse;
}

int main()
{
    while (true){
    std::cout << "Enter in a word to check if it's a palidrome: \n\t****Press CTRL + C to exit****\n";
    std::string input;
    std::cin >> input;

    std::cout << is_palindrome(input) << "\n";
    }
}