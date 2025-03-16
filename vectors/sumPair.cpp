#include <iostream>
#include <vector>
using namespace std;

// vector<int> pairSum(vector<int> nums,int target){
//    vector<int> ans;
//    int n=nums.size();
//     for (int i = 0; i < n; i++){
//         for (int j = i+1; i < n; i++)
//         {
//             if(nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
//     }
vector<int> pairSum(vector<int> nums, int target)
{
    vector<int> ans;
    int n = nums.size();

    int start = 0;
    int end = n-1;
    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum < target)
        {
            start++;
        }
        else if (sum > target)
        {
            end--;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }

    }
    return ans;
}

    int main()
    {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        vector<int> ans = pairSum(nums, target);
        cout << ans[0] << " ," << ans[1] << endl;
        return 0;
    }