#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int w = abs(x - y) - 1;

        cout << (x + y + w) << endl;
    }
    return 0;
}
