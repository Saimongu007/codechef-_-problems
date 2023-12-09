#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int x = n * 2;

        if (n < m)
        {
            cout << n << endl;
        }
        else
        {
            cout << x - m << endl;
        }
    }
    return 0;
}
