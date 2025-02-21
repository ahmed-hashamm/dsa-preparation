#include<iostream>  // Include the input-output stream library for using cout
using namespace std; // Use the standard namespace to avoid writing std:: before every standard library function

// Function to calculate the sum of all numbers from 0 to n
int sumOfNums(int n){
    int sum = 0; // Initialize a variable to store the sum

    // Loop from 0 to n (inclusive)
    for (int i = 0; i <= n; i++)
    {
        sum += i; // Add the current value of i to the sum
    }

    return sum; // Return the calculated sum
}

// Main function where the program execution begins
int main(){
    // Print the sum of numbers from 0 to 5 by calling the sumOfNums function
    cout << "Sum = " << sumOfNums(5);
    return 0; // Return 0 to indicate successful program termination
}
