#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = max(a, max(b, c));
        int y = min(a, min(b, c));

        int second_largest = ((a + b + c) - (x + y));

        cout << second_largest << endl;
    }

    return 0;
}
