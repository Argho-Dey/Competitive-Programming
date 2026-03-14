#include <iostream>

using namespace std;



int main()
{
    int password;

    while (cin >> password)
    {
        if (password == 1999)
        {
            cout << "Correct" << endl;
            break;
        }
    if (10< password )
        {
            cout << "Wrong";
        }
    }

    return 0;
}

