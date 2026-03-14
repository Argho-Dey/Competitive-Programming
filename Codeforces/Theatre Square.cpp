
#include <iostream>
using namespace std;

int main()
{
    long long n, m, a;
    long long x1,y1;
    cin >> n >> m >> a;
x1=n/a;
if(n%a!=0)
    x1++;
y1=m/a;
if(m%a!=0)
    y1++;
long long sum=x1*y1;
    cout<<sum;
}
