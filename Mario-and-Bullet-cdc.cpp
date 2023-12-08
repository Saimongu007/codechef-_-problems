#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int a = y / x;

        if (y % x == 0 && z > a)
        {
            cout << z - a << endl;
        }
        else if (z <= a)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}
