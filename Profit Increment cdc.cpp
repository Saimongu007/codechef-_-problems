#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--)
    {
        int x, y;
        cin>> x>> y;

        int new_profit = x * 0.1;

        int increase_selling = (x + new_profit) - (x - y);

        cout<<increase_selling<<endl;
    }
    return 0;
}

