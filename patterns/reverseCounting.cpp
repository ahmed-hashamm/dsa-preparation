#include <iostream>
using namespace std;

int main()
{
    int n = 4; // Define the size of the pattern (4x4)

    // Outer loop: Controls the rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop: Controls the columns
        for (int j = i+1; j>0; j--)
        {
            cout<<j<<" ";
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
}   