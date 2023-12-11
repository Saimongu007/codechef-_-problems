#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int point1 = abs(x1 - x2);
        int point2 = abs(y1 - y2);

        int p = max(point1, point2);

        cout << p << endl;
    }
    return 0;
}
