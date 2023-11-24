#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        // Calculate XOR without removing any element
        int x = 0;
        for (int i = 0; i < N; ++i)
        {
            x ^= A[i];
        }

        int min_XOR = x;

        // Iterate through each element, remove it, and calculate XOR
        for (int i = 0; i < N; ++i)
        {
            int t_x = x ^ A[i];
            min_XOR = min(min_XOR, t_x);
        }

        cout << min_XOR << endl;
    }

    return 0;
}
