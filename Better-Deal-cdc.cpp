#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        double a_percent = (double)a / 100;
        double b_percent = (double)b / 100;

        int p = (int)100 * a_percent;
        int q = (int)200 * b_percent;

        int x = 100 - p;
        int y = 200 - q;

        if (x < y)
        {
            cout << "FIRST" << endl;
        }
        else if (x > y)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "BOTH" << endl;
        }
    }
    return 0;
}
