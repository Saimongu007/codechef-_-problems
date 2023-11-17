#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;

        int total = w + (y * z);

        if (x < total)
        {
            cout << "overFlow" << endl;
        }
        else if (x == total)
        {
            cout << "filled" << endl;
        }
        else
        {
            cout << "Unfilled" << endl;
        }
    }
    return 0;
}
