#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int w, x, y, z;
	    cin>> w>> x>> y >> z;
	    
	    int gain = x - y;
	    
	    int h = w+gain*z;
	    
	    cout<< h <<endl;
	   // if(gain >= z)
	   // {
	   //     int h = w + (gain * z);
	   //     cout<<h<<endl;
	   // }
	   // else 
	   // {
	   //     int h1 = w + (gain * z);
	   //     cout<< h1 <<endl;
	   // }
	}
	return 0;
}
