#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int l, v1, v2;
        cin>> l >> v1>> v2;

        int a = ceil((float)l/v1);
        int b = ceil((float)l/v2);

        if((a == b) && (a < b))
        {
            cout<< -1 <<endl;
        }
        else
        {
            cout<< a - b -1 <<endl;
        }
    }
    return 0;
}
