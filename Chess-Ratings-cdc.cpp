#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int z = y - x;
        if (x == y)
        {
            cout << "0" << endl;
        }
        else if ((z % 8) == 0)
        {
            cout << z / 8 << endl;
        }
        else
        {
            cout << (z / 8) + 1 << endl;
        }
    }
    return 0;
}
