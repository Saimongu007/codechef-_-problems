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
        int xorWithoutRemoval = 0;
        for (int i = 0; i < N; ++i)
        {
            xorWithoutRemoval ^= A[i];
        }

        int minXOR = xorWithoutRemoval;

        // Iterate through each element, remove it, and calculate XOR
        for (int i = 0; i < N; ++i)
        {
            int tempXOR = xorWithoutRemoval ^ A[i];
            minXOR = min(minXOR, tempXOR);
        }

        cout << minXOR << endl;
    }

    return 0;
}
