#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a[i][j];
            }
        }

        int points = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    int ring = min({i, j, 9 - i, 9 - j});
                    int arrowValue = ring + 1;
                    points = points + arrowValue;
                }
            }
        }

        cout << points << endl;
    }
}
