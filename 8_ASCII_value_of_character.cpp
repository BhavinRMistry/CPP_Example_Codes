//June 29, 2017
//To find ASCII value of any character variable, use int(variableName) function

#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "---Program to find ASCII value of any character---" << endl << endl;
    cout << "Please enter any character: ";
    cin >> c;
    cout << "The ASCII value of " << c << " is " << int(c) << endl;

    return 0;

}
