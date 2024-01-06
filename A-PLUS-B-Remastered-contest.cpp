#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n], b[n], c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + n);

        reverse(b, b + n);

        for (int i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
        }

        sort(c, c + n);

        if (c[0] != c[n - 1])
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;

            for (int i = 0; i < n; i++)
            {
                cout << (c[i] - a[i]) << " ";
            }
            cout << endl;
        }
    }

    return 0;
}