//June 29, 2017
//In this example, if...else statement is used to check whether a number entered by the user is even or odd.

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "---Program to check whether the number is even or odd---" << endl << endl;
    cout << "Enter any integer number: ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << "The entered number " << n << " is even!" << endl;
    }
    else
    {
        cout << "The entered number " << n << " is odd!" << endl;
    }

    return 0;
}
