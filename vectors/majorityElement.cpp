#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> nums){
    int n=nums.size();
    for(int val:nums){
        int fr=0;
        for(int elem:nums){
            if(val==elem){
                fr++;
            }

        }
        if(fr>n/2){
            return val;
        }
    }
    
return -1;
}
int main(){
    vector<int> nums={1,3,1,2,1};
    cout << "Majority Element is " << majorityElement(nums);
    return 0;

}