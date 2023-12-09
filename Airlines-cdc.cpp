#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        int y = n / 100;

        if (n % 100 == 0)
        {
            if (y >= x)
            {
                cout << y - x << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            y++;
            if (y >= x)
            {
                cout << y - x << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}
