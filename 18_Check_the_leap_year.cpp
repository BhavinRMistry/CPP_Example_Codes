//June 29, 2017
/*
How to know if a year is a Leap Year:

yes.	Leap Years are any year that can be evenly divided by 4 (such as 2012, 2016, etc)
 	not.	except if it can be evenly divided by 100, then it isn't (such as 2100, 2200, etc)
 	 	yes.	except if it can be evenly divided by 400, then it is (such as 2000, 2400)

*/

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter a year to check whether it is leap year or not? ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year" << endl;
            }
            else
            {
                cout << year << " is not a leap year" << endl;
            }
        }
        else
        {
            cout << year << " is a leap year" << endl;
        }
    }
    else
        cout << year << " is not a leap year." << endl;
    return 0;
}
