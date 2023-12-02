#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int sum = a + b;

        bool is_prime = true;

        // 0 and 1 are not prime numbers
        if (sum == 0 || sum == 1)
        {
            is_prime = false;
        }

        // loop to check if n is prime
        for (int i = 2; i <= sum / 2; ++i)
        {
            if (sum % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
        {
            cout << "Alice" << endl;
        }

        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
