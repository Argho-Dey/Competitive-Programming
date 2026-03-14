#include <iostream>
using namespace std;
int main()
{
    int a, arr[a] , count=0;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        bool p, v, t ;
    cin>>p>>v>>t;
    if(p+v+t>=2)
    {
        ++count;
    }
    }
    cout<<count;

}
