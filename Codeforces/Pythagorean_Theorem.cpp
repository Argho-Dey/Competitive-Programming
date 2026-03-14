#include <iostream>
using namespace std;
int main()
{
    int n, c, a, b;
    cin >> b;
cin >> a;
cin >> c;

    int A ;

    for (int a = 1; a <= n; ++a)
    {
        for (int b = a; b <= n; ++b)
        {
            int square = a * a + b * b;

            if (c <= n && c * c == square)
            {
                A++;
            }
        }
    }

    cout << A << endl;

    return 0;
}

