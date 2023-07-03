#include <iostream>
using namespace std;

int main()
{
    int year = 0;

    cout << "Enter in a four number year: \n";
    cin >> year;

    if (year < 1000 || year > 9999)
    {
        cout << "Please enter in a four number year.\n";
        exit(1);
    }

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << "Leap Year!\n";
    }
    else
    {
        cout << "Not Leap Year!\n";
    }
}