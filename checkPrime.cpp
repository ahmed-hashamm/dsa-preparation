#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isPrime=true;
    cout<<"Enter Number"<<endl;
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    isPrime?cout<<"Prime" : cout<<"Not Prime";

    return 0;
}
