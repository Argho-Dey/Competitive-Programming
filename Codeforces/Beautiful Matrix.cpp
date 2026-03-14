#include <iostream>
using namespace std;
int main()
{
    int ar[6][6], i, j;
    int row = 0, col = 0;

    for (i = 1; i < 6; i++) {
        for (j = 1; j < 6; j++) {
            cin >> ar[i][j];
            if (ar[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    int row_moves;
    if (row - 3 >= 0) {
        row_moves = row - 3;
    } else {
        row_moves = -(row - 3);
    }

    int col_moves;
    if (col - 3 >= 0) {
        col_moves = col - 3;
    } else {
        col_moves = -(col - 3);
    }

    int moves = row_moves + col_moves;
    cout << moves;

    return 0;
}
