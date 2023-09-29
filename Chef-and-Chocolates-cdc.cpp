#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>> t;
	
	while(t--)
	{
	    int x, y, z;
	    cin>> x>> y>> z;
	    
	    int has = (x * 5) + (y * 10);
	    
	    int buy = has/z;
	    cout<<buy <<endl;
	}
	return 0;
}
