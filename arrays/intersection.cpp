#include <iostream>
using namespace std;

void Intersection(int arr1[], int arr2[], int size) {
    cout << "Intersection of the array: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; 
            }
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 8, 4, 19, 10, 22};
    int arr2[] = {11, 22, 33, 42, 51, 8, 43, 1, 0, 12};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    Intersection(arr1, arr2, size);
    return 0;
}