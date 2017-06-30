//June 29, 2017
//We are using if...else if condition to find the lasrgest and smallest number among three entered numbers.

#include <iostream>

using namespace std;

int main()
{
    float a, b, c;

    cout << "Please enter any three real numbers to find largest and smallest number among them." << endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " is the largest number." << endl;
    }
    else if (c >= a && c >= b)
    {
        cout << c << " is the largest number." << endl;
    }
    else
    {
        cout << b << " is the largest." << endl;
    }
    if (a <= b && a <= c)
    {
        cout << a << " is the smallest number." << endl;
    }
    else if (c <= a && c <= b)
    {
        cout << c << " is the smallest number." << endl;
    }
    else
    {
        cout << b << " is the largest." << endl;
    }

    return 0;
}
