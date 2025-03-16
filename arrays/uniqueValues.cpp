#include <iostream>
using namespace std;

void printUniqueValues(int arr[], int size) {
    cout << "Unique values in the array: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 20, 40, 10, 50, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    printUniqueValues(arr, size);

    return 0;
}