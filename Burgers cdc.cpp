#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>> t;

	while(t--)
	{
	    int A,B;
	    cin>>A >> B;

	    int c = min(A,B);
	    cout<< c <<endl;
	}
	return 0;
}

