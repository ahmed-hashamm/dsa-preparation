#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int m, int maxLimit)
{
    int students = 1, pages = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxLimit)
        {
            return false;
        }
        if (pages + arr[i] <= maxLimit)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students <= m;
}

int allocatedBooks(vector<int> &arr, int m)
{
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }
    int ans = -1;
    int st = 0, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, m, mid))
        {
            ans = mid; // Update ans only when a valid mid is found
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {5, 1, 3, 2, 4};
    int m = 2;
    cout << allocatedBooks(arr, m) << endl;
    return 0;
}