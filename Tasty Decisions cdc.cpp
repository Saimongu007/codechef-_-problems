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

	    int chocolate = x * 2;
	    int candy = y * 5;

	    if(chocolate > candy)
	    {
	        cout<<"Chocolate" <<endl;
	    }
	    else if(chocolate < candy)
	    {
	        cout<<"Candy" <<endl;
	    }
	    else
	    {
	        cout<<"Either" <<endl;
	    }
	}
	return 0;
}

