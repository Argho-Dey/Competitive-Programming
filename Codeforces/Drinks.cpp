#include <iostream>
using namespace std;
int main()
{
    long n;
    cin>>n;
    double arr[n], sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    double k=sum/n;
    cout<<k;
}
