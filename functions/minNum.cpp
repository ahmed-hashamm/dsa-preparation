#include <iostream>  // Include the input-output stream library for using cout
using namespace std; // Use the standard namespace to avoid writing std:: before every standard library function

// Function to find the minimum of two numbers
int minNum(int x, int y){
    // Check if x is greater than y
    if (x > y)
    {
        return y; // If x is greater, return y as the smaller number
    }
    else
    {
        return x; // Otherwise, return x as the smaller number
    }
}

// Main function where the program execution begins
int main()
{
    // Print the minimum of 89 and 9 by calling the minNum function
    cout << minNum(89, 9);
    return 0; // Return 0 to indicate successful program termination
}
