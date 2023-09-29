#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        double commission = (x * 0.2);

        int insurences = ceil(100 / commission);

        cout << insurences << endl;
    }
    return 0;
}
