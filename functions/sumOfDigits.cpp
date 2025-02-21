#include<iostream>
using namespace std;
int sumOfDigits(int n){
int digitSums=0;
while (n>0)
{
    int lastdigits = n%10;
    n=n/10;
    digitSums += lastdigits;
}
return digitSums;
}
int main(){
    cout<<sumOfDigits(96543);
    return 0;
}