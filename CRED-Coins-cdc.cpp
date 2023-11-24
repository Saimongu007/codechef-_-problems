#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int r = x * y;
        int bag = r / 100;

        cout << bag << endl;
    }
    return 0;
}
