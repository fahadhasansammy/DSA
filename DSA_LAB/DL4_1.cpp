#include <iostream>
using namespace std;

int main() {
    int mi, soa = 4;
    int arr[4] = {98, 56, 65, 23};

    // Selection sort algorithm
    for (int i = 0; i < soa - 1; i++) {
        mi = i;
        for (int j = i + 1; j < soa; j++) {
            if (arr[j] < arr[mi]) {
                mi = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[mi];
        arr[mi] = arr[i];
        arr[i] = temp;
    }

    // Print the sorted array
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
