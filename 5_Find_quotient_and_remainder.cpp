//June 29,2017
//In this example, you will learn to find the quotient and remainder of a given dividend and divisor.
//dividend / divisor = quotient

#include <iostream>

using namespace std;

int main()
{
    int dividend, divisor, quotient, remainder;

    cout << "A program to find the quotient and remainder." << endl;
    cout << "Enter the dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder << endl;

    return 0;

}
