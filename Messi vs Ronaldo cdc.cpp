#include <iostream>
using namespace std;

int main()
{
    int A, B, X, Y;
    cin>> A>> B >> X>> Y;

    int messi_total =(A * 2) + B;
    int ronaldo_total = (X * 2) + Y;

    if(messi_total > ronaldo_total)
    {
        cout<<"Messi" <<endl;
    }
    else if(messi_total < ronaldo_total)
    {
        cout<<"Ronaldo" <<endl;
    }
    else
    {
        cout<<"Equal" <<endl;
    }
    return 0;
}

