#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int n, x;
        cin>> n>> x;

        int y = (x * 2);
        if(y >= n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

