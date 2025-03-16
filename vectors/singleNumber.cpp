#include<iostream>
#include<vector>
using namespace std;

int singleNumber( vector<int>& array){
    int ans = 0;
    for(int val:array){
        ans ^= val;
    }
    return ans;
}
int main(){
    vector<int>nums={1,2,3,4,2,3,1};
    cout<<singleNumber(nums);
    return 0;
}