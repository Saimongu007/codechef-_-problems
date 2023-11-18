#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;

        int percent_discount = (x * 10) / 100;

        if (percent_discount > 100)
        {
            cout << percent_discount << endl;
        }
        else
        {
            cout << "100" << endl;
        }
    }
    return 0;
}
