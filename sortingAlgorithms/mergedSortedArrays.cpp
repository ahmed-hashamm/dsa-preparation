#include <iostream>
#include <vector>
using namespace std;
void sortArrays(vector<int> &A, int n, vector<int> &B, int m)
{
    int indx = n + m - 1, i = n - 1, j = m - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j]){
            A[indx--]=A[i--];
        }
        else{
            A[indx--]=B[j--];
        }
    }
    while(j>=0){
        A[indx--]=B[j--];
    }
}
int main(){
    vector<int> A = {1, 3, 5, 7, 9,0,0,0};
    vector<int> B = {2, 4, 6};
    int n = 5;
    int m = 3;
    sortArrays(A, n, B, m);
    for (int i = 0; i < n + m ; i++)
    cout << A[i] << " ";
    return 0;
}