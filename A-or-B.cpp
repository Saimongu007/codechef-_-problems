#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int x = (500 - (a * 2));
        int y = (1000 - ((a + b) * 4));

        int p = (1000 - (b * 4));
        int q = (500 - ((a + b) * 2));

        cout << max((x + y), (p + q)) << endl;
    }

    return 0;
}
