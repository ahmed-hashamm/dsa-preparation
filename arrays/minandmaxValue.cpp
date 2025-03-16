#include <iostream>
using namespace std;
int main()
{
    int size = 8;
    int nums[size] = {3, 6, 45, -2, 45, 2, 9, -14};
    int smallest = INT_MAX;
    int largest=INT_MIN;
    
    for (int i = 0; i < size; i++)
    {
        smallest=min(nums[i],smallest);
        largest=max(nums[i],largest);
    }
    cout << "Smallest number = " <<smallest<<endl;
    cout<<"Largest number = "<<largest;

    return 0;
}