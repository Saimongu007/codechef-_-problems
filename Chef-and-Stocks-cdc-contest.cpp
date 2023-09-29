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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        int *x = min_element(a, a + n);

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + a[i];
        }
        cout << sum - *x << endl;
    }
    return 0;
}
