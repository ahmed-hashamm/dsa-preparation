#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool isPossible(vector<int> &arr, int m, int maxLimit)
{
    int painters = 1, time = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxLimit)
        {
            return false;
        }
        if (time + arr[i] <= maxLimit)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
            if (painters > m)
            {
                return false;
            }
        }
    }
    return true;
}

int PaintersAlgo(vector<int> &arr, int m)
{
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int ans = -1;
    int st = maxVal, end = sum;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {5, 1, 3, 2, 4};
    int m = 2;
    cout << PaintersAlgo(arr, m) << endl;
    return 0;
}