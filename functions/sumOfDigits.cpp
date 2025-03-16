#include<iostream>  // Include the input-output stream library for using cout
using namespace std; // Use the standard namespace to avoid writing std:: before every standard library function

// Function to calculate the sum of digits of a number
int sumOfDigits(int n){
    int digitSums = 0; // Initialize a variable to store the sum of digits

    // Loop until the number becomes 0
    while (n > 0)
    {
        int lastdigits = n % 10; // Extract the last digit of the number
        n = n / 10; // Remove the last digit from the number
        digitSums += lastdigits; // Add the extracted digit to the sum
    }
    return digitSums; // Return the sum of the digits
}

// Main function where the program execution begins
int main(){
    // Print the sum of digits of 96543 by calling the sumOfDigits function
    cout << sumOfDigits(96543);
    return 0; // Return 0 to indicate successful program termination
}
