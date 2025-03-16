#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums={1,2,3,4};
    for(int value:nums){
        cout<<value<<endl;
    }

    cout<<"size ="<<nums.size()<<endl; //size of vector

    nums.push_back(30); //insert value at the end of array
    nums.pop_back(); //delete value from the end of array
    cout<<"size ="<<nums.size(); //size of vector
    cout<<nums.front()<<endl; //starting value print
    cout<<nums.back(); //ending value print
    cout<<nums.at(1)<<endl; //access value at specific index
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    cout<<nums.size()<<endl;
    cout<<nums.capacity();
    return 0;

}
