#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int c_10 = x / 10;
        int r = x % 10;
        int c_5 = r / 5;
        int r_5 = r % 5;

        if (r_5 == 0)
        {
            int t = c_5 + c_10;
            cout << t << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
