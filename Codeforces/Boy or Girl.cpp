#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string a;
    cin >> a;

    set<char> unique_chars(a.begin(), a.end());
    if (unique_chars.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
