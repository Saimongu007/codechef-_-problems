#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>> t;

	while(t--)
	{
	    int a, b, c;
	    cin>> a >> b>> c;

	    int x = max(max(a,b),c);
	    int y = min(min(a,b),c);

	    int z = (a + b + c) - (x + y);

	    cout<< z <<endl;
	}
	return 0;
}

