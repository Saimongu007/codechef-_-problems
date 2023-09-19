#include <iostream>
using namespace std;

int main()
{
	int T;
	cin>> T;

	while(T--)
	{
	    int X , N;
	    cin>> X >> N;

	    int mul = X/10;
	    int result = mul * N;

	    cout<< result << endl;

	}
	return 0;
}
