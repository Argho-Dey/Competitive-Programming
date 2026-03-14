#include <iostream>

using namespace std;

int main()
{
    char letter;


    cin >> letter;


    if (islower(letter))
    {
        letter = letter - 32;
    }
    else if (isupper(letter))
    {
        letter = letter + 32;
    }


    cout << letter << endl;

    return 0;
}
