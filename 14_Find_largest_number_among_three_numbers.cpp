//June 29, 2017
//Finding the larget number using if...else condition

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter any three numbers." << endl;
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " is largest." << endl;
    }
    if (b >= a && b >= c)
    {
        cout << b << " is largest." << endl;
    }
    else
    {
        cout << c << " is largest!" << endl;
    }
    return 0;
}
