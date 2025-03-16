#include<iostream>
#include<vector>
using namespace std;
int peakIndex(vector<int> nums){
    int n = nums.size();
    int left = 1, right = n - 2;
    while(left<=right){
        int mid = left + (right - left) / 2;
        if(nums[mid-1]<nums[mid] && nums[mid]> nums[mid+1]) return mid;
        if(nums[mid]>nums[mid-1]){
            left = mid + 1;
        }
        else{
            right  =mid-1;  
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {1,2,3,1};
    cout<<peakIndex(nums)<<endl;
    return 0;
}