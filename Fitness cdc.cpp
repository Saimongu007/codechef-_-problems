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

         int travels_day = (2 * x);

         int travels_week = (travels_day * 5);
         cout<< travels_week <<endl;
     }
	return 0;
}

