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

        double a_percent = (double)a / 10;
        double b_percent = (double)b / 20;

        // int p = (int)(10 * a_percent);
        // int q = (int)(20 * b_percent);

        if (a_percent > b_percent)
        {
            cout << "FIRST" << endl;
        }
        else if (a_percent < b_percent)
        {
            cout << "SECOND" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
