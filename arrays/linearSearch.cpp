#include <iostream>
using namespace std;

int linearSearch(int arr[], int target, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; //Return index if elem found
        }
    }
   return -1; //Not Found
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 65, 5, 24, 5, 6};
    int size = 10;
    int target = 11;
    int result = linearSearch(arr, target, size);
    cout<< result;
}