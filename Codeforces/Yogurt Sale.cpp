#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, a, b;
        cin >> n >> a >> b;


        int costPerYogurt = min(a, b / 2);


        int totalCost = n * costPerYogurt;


        cout << totalCost << endl;
    }

    return 0;
}
