#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        int s = z - y;

        int m = s / x;
        cout << m << endl;
    }
    return 0;
}
