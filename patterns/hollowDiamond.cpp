#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // left stars
        cout << "*";

        // spaces
        if (i != 0)
        {
            for (int j = 0; j <= 2 * i - 1; j++)
            {
                cout << " ";
            }
            // right stars

            cout << "*";
        }

        cout << endl;
    }
    for (int i = 0; i < n - 1; i++)
    {
        // spaces
        for (int j = 0; j < i + 1; j++)
        {
            cout << " ";
        }
        // left stars
        cout << "*";

        if (i != n - 2)
        {
            for (int j = 0; j <= 2 * (n - i) - 5; j++)
            {
                cout << " ";
            }
            // left stars
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}