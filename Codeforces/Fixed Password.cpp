#include <iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;


    if (1000<=X<=9999&&X!=1999)
    {
        cout<< "Wrong";
    }
       else if (X==1999)
    {
        cout<< "Correct";
    }


}
