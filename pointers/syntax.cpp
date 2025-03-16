#include<iostream>
#include<vector>
using namespace std;
int main(){
    float price=100.00;
    float* ptr=&price;
    float** ptr2=&ptr;
    cout<<ptr<<endl;
    cout<<&price<<endl;
    cout<<&ptr<<endl;
    
    cout<<*(&price)<<endl;
    cout<<*(ptr)<<endl;
    cout<< **(ptr2);
return 0;
}