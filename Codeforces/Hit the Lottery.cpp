#include <iostream>
using namespace std;

int main() {
    int a, countt = 0;
    cin >> a;

    countt += a / 100;
    a %= 100;

    countt += a / 20;
    a %= 20;

    countt += a / 10;
    a %= 10;

    countt += a / 5;
    a %= 5;

    countt += a / 1;
    a %= 1;

    cout << countt << endl;

    return 0;
}
