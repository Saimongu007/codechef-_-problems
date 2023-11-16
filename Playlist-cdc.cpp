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

        int a = 3 * x;

        int s = n / a;
        cout << s << endl;
    }
    return 0;
}
