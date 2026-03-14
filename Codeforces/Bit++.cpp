#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, sum=0;
   cin>>a;
    for (int i=0; i<a; i++)
    {
        string statement;
 cin >> statement;



        if ( statement=="X++"||statement=="++X")
        {
            sum++;
        }

        else if ( statement=="X--"||statement=="--X")
             {
            sum--;
        }

    }
    cout<<sum;

}
