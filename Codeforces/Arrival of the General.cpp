#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a <= 0) {
        cout << "Invalid array size";
        return 0;
    }

    int arr[a];

    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int maxIndex = 0, minIndex = 0, swapCount = 0;

    for (int i = 1; i < a; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Swap max element with first element
    if (maxIndex != 0) {
        swap(arr[0], arr[maxIndex]);
        swapCount++;

        // If minIndex was at 0, update it after swapping
        if (minIndex == 0) {
            minIndex = maxIndex;
        }
    }

    // Swap min element with last element
    if (minIndex != a - 1) {
        swap(arr[a - 1], arr[minIndex]);
        swapCount++;
    }

    // Print the modified array
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    // Print the swap count on a new line
    cout << "\nTotal swaps: " << swapCount << endl;

    return 0;
}
