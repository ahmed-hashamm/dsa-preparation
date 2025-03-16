#include <iostream>
using namespace std;
int arraySum(int arr[], int size)
{
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod *= arr[i];
    }
    return prod;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Product of array elements: " << arraySum(arr, size);
    return 0;
}