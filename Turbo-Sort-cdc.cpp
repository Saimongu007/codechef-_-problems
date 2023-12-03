#include <bits/stdc++.h>
using namespace std;

// int N, A[1000001];

// int main()
// {
//     cin >> N;
//     for(int i = 1; i <= N; i++)
//         cin >> A[i];
//     sort(A + 1, A + N + 1);
//     for(int i = 1; i <= N; i++)
//         cout << A[i] << endl;
// }

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}