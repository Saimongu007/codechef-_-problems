#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int N, X, Y;
        cin>> N>> X>> Y;

        int result = X + (Y * 2);
        if(N > result)
        {
            cout<<"YES" <<endl;

        }
        else if(N < result)
        {
            cout<<"NO" <<endl;

        }
        else
        {
            cout<<"YES" <<endl;
        }
    }
	return 0;
}

