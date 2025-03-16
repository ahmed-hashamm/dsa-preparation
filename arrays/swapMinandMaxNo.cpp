#include <iostream>
using namespace std;
void swapping(int arr[], int size)
{
    int smallestValIndex = 0;
    int largestValIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i]<arr[smallestValIndex]){
            smallestValIndex = i;
        }
        if(arr[i]>arr[largestValIndex]){
            largestValIndex = i;
        }
    }
    swap(arr[smallestValIndex], arr[largestValIndex]);
    
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {10, 40, 30, 60, 50, 23, 45, 23, 56, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before swapping  : " << endl;
    display(arr, size);
    swapping(arr, size);
    cout << "\nAfter swapping : " << endl;
    display(arr, size);
    return 0;
}