#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &arr,int N, int C, int minLimit)
{
    int cows = 1, lastStall=arr[0];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] - lastStall >=minLimit)
        {
           cows++;
           lastStall = arr[i];
        }
        if(cows==C)  return true;
    }
    return false;
}

int allocatingCows(vector<int> &arr, int N,int C)
{
    sort(arr.begin(),arr.end());
    int ans = -1;
    int st = 0, end = arr[N-1]-arr[0];
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr,N,C,mid))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9};
    int N=5,C=3;
    cout << allocatingCows(arr, N,C) << endl;
    return 0;
}