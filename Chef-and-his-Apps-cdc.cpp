#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;

        // int app = x + y;

        int unused = s - x - y;
        if (unused >= z)
        {
            cout << 0 << endl;
        }
        else if (x + unused >= z || unused + y >= z)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}
