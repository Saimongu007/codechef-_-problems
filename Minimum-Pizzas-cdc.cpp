#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int a = (n * x) / 4;

        if ((n * x) % 4 == 0)
        {
            cout << a << endl;
        }
        else
        {
            cout << a + 1 << endl;
        }
    }
    return 0;
}
