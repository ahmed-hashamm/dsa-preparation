#include <iostream>
using namespace std;

int main()
{
    int n; // Variable to store the input number
    bool isPrime = true; // Boolean flag to track if the number is prime (initially assumed true)
    // Prompt the user to enter a number
    cout << "Enter Number" << endl;
    cin >> n; // Read the input number from the user
    // Loop through numbers from 2 to n-1 to check for divisibility
    for (int i = 2; i < n; i++)
    {
        // If n is divisible by i, it is not a prime number
        if (n % i == 0) {
            isPrime = false; // Set the flag to false
            break; // Exit the loop early since we already know it's not prime
        }
    }
    // Ternary operator to print "Prime" if isPrime is true, otherwise print "Not Prime"
    isPrime ? cout << "Prime" : cout << "Not Prime";
    return 0; // Indicate successful program termination
}
