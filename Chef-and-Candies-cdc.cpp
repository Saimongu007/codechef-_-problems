#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	
	while(t--)
	{
	    int n, x;
	    cin>> n >> x;
	    
	    if(n > x)
	    {
	        int r = (n - x + 3)/4;
	        cout<< r <<endl;
	    }
	    else
	    {
	        cout<< "0" <<endl;
	    }
	}
	return 0;
}
