//June 29, 2017
//Here, we are using turnary operator for simple if...else statement
//(condition) ? true expr1 :  fasle expr2 (else statement);

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter any number to check whether it is even or odd!" << endl;
    cin >> n;

    (n % 2 == 0) ? cout << n << " is even!" : cout << n << " is odd!" << endl;

    return 0;
}
