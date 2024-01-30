#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int k, n;
        cin >> k >> n;

        int x = k / n;
        int y = x * x;

        cout << y << endl;
    }
    return 0;
}
