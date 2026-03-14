#include <iostream>
#include <string>
using namespace std;

void toLowerCase(string& str) {
    for (char& c : str) {
        c = tolower(c);
    }
}

int main() {
    for (int i = 0; i < 2; i++) {
        string statement1, statement2;
        cin >> statement1;
        cin >> statement2;

        toLowerCase(statement1);
        toLowerCase(statement2);

        if (statement1 == statement2) {
            cout << "0" << endl;
            break;
        } else if (statement1 > statement2) {
            cout << "1" << endl;
            break;
        } else {
            cout << "-1" << endl;
            break;
        }
    }
    return 0;
}
