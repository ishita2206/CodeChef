#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		float q,p;
		cin >> q >> p;
		if( q > 1000 )
			printf("%f\n", q*p*0.9); 
		else
			printf("%f\n",q*p);
	}
}
