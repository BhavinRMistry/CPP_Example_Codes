//June 29, 2017
/*
In this program, user is asked to enter two integers.
Then, the sum of those two integers is stored in a variable and displayed on the screen.
*/

#include <iostream>

using namespace std;

int main()
{
    int n1, n2, sum;

    cout << "A program to add two integer numbers." << endl;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << endl << "Enter the second number: ";
    cin >> n2;

    sum = n1 + n2;  //addition

    cout << endl << "The sum of " << n1 << " and " << n2 << " is " << sum << endl;
    cout << n1 << " + " << n2 << " = " << sum << endl;

    return 0;
}
