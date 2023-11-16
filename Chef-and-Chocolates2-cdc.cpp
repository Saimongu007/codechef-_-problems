#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int c, x, y;
        cin >> c >> x >> y;

        int h = c - x;
        int cost = h * y;

        cout << cost << endl;
    }
    return 0;
}
