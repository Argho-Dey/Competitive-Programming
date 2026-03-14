#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;

    int arr1[n/2],arr2[n/2];
    for(int i=0; i<n; i++)
    {
        if (i%2!=0)
            arr1[i]==;
    }
    for(int i=0; i<n; i++)
    {

        if (i%2==0)
            cin>> arr2[i];
    }


    int sise=sizeof(arr1)/sizeof(arr1[0]);

    if(k>sise)
    {
        int a=k-sise;
        cout<<arr2[a];
    }

    if(k<sise)
    {
        int b=sise-k;

        cout<<arr1[b];

    }
        if(k==sise)
            cout<<arr1[k];

}
