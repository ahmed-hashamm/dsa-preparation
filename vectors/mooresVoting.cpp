#include<iostream>
#include<vector>
using namespace std;
int mooresVoting(vector<int> nums){
    int freq=0,ans=0;
    for (int i = 0; i < nums.size(); i++)
    {
    if(freq==0){
        ans=nums[i];
    }
    if(ans==nums[i]){
        freq++;
    }
    else
    {
        freq--;
    }
}
return ans;
}
int main(){
    vector<int> nums={1,4,2,2,4,3,4,4,3,4};
    cout<<mooresVoting(nums)<<endl;
    return 0;
}