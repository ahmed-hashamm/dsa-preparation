#include<iostream>
#include<vector>
using namespace std;
void DNF(vector<int> &nums){
    int n = nums.size();
    int l=0, m=0,h=n-1;
    while(m<=h){
        if(nums[m]==0){
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1){
            m++;
        }
        else{
            swap(nums[m],nums[h]);
            h--;
        }
    }
}
int main(){
    vector<int> nums = {1, 0, 2, 1, 1,0}; 
    DNF(nums);
    cout << "Sorted array: ";
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    return 0;

}