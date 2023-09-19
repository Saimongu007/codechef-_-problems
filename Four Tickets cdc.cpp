#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>> t;

	while(t--)
	{
	    int x;
	    cin>> x;

	    int total_cost = 4 * x;

	    if(total_cost <= 1000)
	    {
	        cout<<"YES" <<endl;
	    }
	    else if(total_cost >= 1000)
	    {
	        cout<<"NO" <<endl;
	    }
	}
	return 0;
}

