#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int disposable_masks = x * 100;
        int cloth_masks = y * 10;

        if (disposable_masks >= cloth_masks)
        {
            cout << "Cloth" << endl;
        }
        else
        {
            cout << "Disposable" << endl;
        }
    }

    return 0;
}
