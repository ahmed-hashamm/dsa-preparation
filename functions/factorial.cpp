#include<iostream>  // Include the input-output stream library for using cout
using namespace std; // Use the standard namespace to avoid writing std:: before every standard library function

// Function to calculate the factorial of a number
int factorial(int n){
    int fact = 1; // Initialize the factorial result to 1

    // Loop from 1 to n to calculate the factorial
    for (int i = 1; i <= n; i++)
    {
        fact *= i; // Multiply the current value of fact by i
    }
    return fact; // Return the calculated factorial
}

// Main function where the program execution begins
int main(){
    // Print the factorial of 8 by calling the factorial function
    cout << "factorial = " << factorial(8);
    return 0; // Return 0 to indicate successful program termination
}
