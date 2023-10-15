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
	    
	    int second = x * 60;
	    
	    int submission = second/30;
	    cout<<submission<<endl;
	}
	return 0;
}
