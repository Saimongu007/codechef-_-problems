#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;
    for(int i =0; i<t; i++)
    {
        int x;
        cin>> x;

        if(2000 < x)
        {
            cout<< "YES" <<endl;
        }
        else if( 2000 == x)
        {
            cout<< "YES" <<endl;
        }
        else
        {
            cout<<"NO" <<endl;
        }
    }
    return 0;
}
