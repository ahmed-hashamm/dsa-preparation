#include<iostream>
#include<vector>
using namespace std;

int maxsubarraySum( int array[],int size){
    int currSum=0,maxSum=INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currSum = currSum + array[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSum;
}
int main(){
    int nums[]={1,-2,3,-4,2,3,-1,9};
    int size=8;
    cout<<maxsubarraySum(nums,8);
    return 0;
}