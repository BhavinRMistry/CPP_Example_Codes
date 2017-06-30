//June 29, 2017
//In this example, you'll learn to calculate the sum of natural numbers using loop
/*
Positive integers 1, 2, 3, 4... are known as natural numbers.
This program takes a positive integer from user( suppose user entered n ) then,
this program displays the value of 1+2+3+....+n.
*/

#include <iostream>

using namespace std;

int main()
{
    int i, n, sum;

    sum = 0;

    cout << "Enter any natural number to find its sum: ";
    cin >> n;

    for(i = 1; i <=n ; i++){
        sum += i;
    }

    cout << "Natural sum is: " << sum << endl;
    return 0;
}
