//June 29, 2017
//In this example, you'll learn to print the number entered by a user using C++ cout statement.

#include <iostream>

using namespace std;

int main()
{
    int n1;  //defining an integer variable n1
    float n2;   //defining a floting point variable n2

    cout << "Please enter any ineger variable to display." << endl;
    cin >> n1;   //taking input from the user
    cout << "You have entered " << n1 << " integer." << endl << endl;    //displaying the value of n1 on the display

    cout << "Now enter any floating point number." << endl;
    cin >> n2;
    cout << "The value you have entered is: " << n2 << endl;

    return 0;
}
