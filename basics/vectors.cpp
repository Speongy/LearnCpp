#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> review = {2, 4, 3, 6, 1, 9, 5, 7};
    int sum = 0, prod = 1;

    for (int i = review.size() - 1; i < review.size(); i--)     //prints vector in reverse order
    {
        cout << review[i] << "\n";
    }
    cout << "\n\n";

    for (int i = 0; i < review.size(); i++)         //prints everything in vector
    {
        cout << review[i] << "\n";
    }

    for (int i = 0; i < review.size(); i++)
    {
        if (review[i] % 2 == 0)
        {
            sum += review[i];
        }
        else if (review[i] % 2 != 0)
        {
            prod = prod * review[i];
        }
    }
    cout << "Sum of even numbers is " << sum << "\n";
    cout << "Product of odd numbers is " << prod << "\n";
}