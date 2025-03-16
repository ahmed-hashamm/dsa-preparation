#include<iostream>
#include<vector>
using namespace std;
int buyAndSell(vector<int> prices){
    int maxProf=0,bestBuy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>bestBuy){
            maxProf=max(maxProf,prices[i]-bestBuy);
        }
        bestBuy=min(prices[i],bestBuy);
    }
    return maxProf;
}
int main(){
    vector<int> prices={7,1,5,3,6,4};
    cout<<buyAndSell(prices)<<endl;
    return 0;
}