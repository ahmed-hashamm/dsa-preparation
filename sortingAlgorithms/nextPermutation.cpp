#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int> &num){
    int n = num.size();
    int piv=-1;
    for (int i = n-2; i >= 0;i--)
    {
        if(num[i]<num[i+1]){
            piv=i;
            break;
        }

    }
    if(piv == -1){
        int st = 0, end = n-1;
        while(st < end){
            swap(num[st], num[end]);
            st++;
            end--;
        }
        return;
    }

    for (int i = n-1; i >piv; i--)
    {
        if(num[i]>num[piv]){
            swap(num[i], num[piv]);
            break;
        }
    }
 int i=piv+1, j=n-1;
 while(i<j){
    swap(num[i++], num[j--]);
 }
    
    
}
int main(){
    vector<int> num = {1,2,3};
    nextPermutation(num);
    for (int i = 0; i < num.size(); i++)
    {
        cout<<num[i]<<" ";
    }
    
    return 0;
}