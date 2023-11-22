#include <iostream>
using namespace std;

int main() {
	int t;
	cin>> t;
	
	while(t--)
	{
	    int n;
	    cin>> n;
	    
	    int page = n * 1000;
	    int make = page/100;
	    
	    cout<< make <<endl;
	}
	return 0;
}
