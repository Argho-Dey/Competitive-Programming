#include <iostream>
using namespace std;

int main()
{
    float english, math, physics, programming;
    float cgpa;


    cout << "Enter grade point for English: ";
    cin >> english;

    cout << "Enter grade point for Math: ";
    cin >> math;

    cout << "Enter grade point for Physics: ";
    cin >> physics;

    cout << "Enter grade point for Programming: ";
    cin >> programming;


    cgpa = (english + math + physics + programming) / 4;


    cout << "\nCGPA: " << cgpa << endl;


    if (cgpa >= 3.75 && cgpa <= 4.00)
    {
        cout << "Performance: GOOD";
    }
    else if (cgpa >= 3.50 && cgpa < 3.75)
    {
        cout << "Performance: SATISFACTORY";
    }
    else if (cgpa >= 3.00 && cgpa < 3.50)
    {
        cout << "Performance: NEED TO IMPROVE";
    }
    else
    {
        cout << "Performance: POOR";
    }

    return 0;
}
