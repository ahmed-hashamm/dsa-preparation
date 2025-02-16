#include <iostream>
using namespace std;
int main()
{
    char c;
    
    cout<<"Enter Character"<<endl;
    cin>>c;
   if(c>='A' && c<='Z')
   {
    cout<<"Upper Case";
   }
   else{
    cout<<"Lower Case";
   }

    return 0;
}
