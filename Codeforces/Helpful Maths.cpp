#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string a;
    cin >> a;

    vector<int> numbers;
    for (char c : a) {
        if (c != '+') {
            numbers.push_back(c - '0');
        }
    }

    sort(numbers.begin(), numbers.end());

    for (size_t i = 0; i < numbers.size(); ++i) {
        if (i > 0) {
            cout << "+";
        }
        cout << numbers[i];
    }

    return 0;
}