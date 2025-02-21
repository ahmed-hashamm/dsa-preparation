#include <iostream>
using namespace std;
int minNum(int x, int y){
    if (x > y)
    {
        return y;
    }
    else{
        return x;
    }
}
int main()
{
    cout<<minNum(89,9);
    return 0;
}