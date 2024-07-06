#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if (n % 2 == 0)
        {
            int e1 = n * x;
            int e2 = (n / 2) * y;

            int result1 = max(e1, e2);
            cout << result1 << endl;
        }

        else
        {
            int e1 = n * x;
            int e2 = (n / 2) * y + x;

            int result2 = max(e1, e2);
            cout << result2 << endl;
        }
    }
    return 0;
}
