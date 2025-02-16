#include <iostream>
using namespace std;

int main()
{
    int n = 4; // Define the size of the pattern (4x4)

    // Outer loop: Controls the rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop: Controls the columns
        for (int j = 0; j < n; j++)
        {
            cout << "* "; // Print the current value of j
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Indicate successful program termination
}