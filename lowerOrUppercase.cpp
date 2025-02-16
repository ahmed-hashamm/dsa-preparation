#include <iostream>
using namespace std;

int main()
{
    char c; // Variable to store the input character

    // Prompt the user to enter a character
    cout << "Enter Character" << endl;
    cin >> c; // Read the input character from the user
    // Check if the character is an uppercase letter (A-Z)
    if (c >= 'A' && c <= 'Z')
    {
        cout << "Upper Case"; // Print "Upper Case" if the character is uppercase
    }
    else
    {
        cout << "Lower Case"; // Print "Lower Case" if the character is lowercase or not a letter
    }

    return 0; // Indicate successful program termination
}
