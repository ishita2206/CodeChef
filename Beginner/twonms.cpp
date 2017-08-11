#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long int a,b,k;
		cin >> a >> b >> k;
		if( k%2 )
			a *= 2;
		unsigned long int max = ( a > b ? a : b );
		unsigned long int min = ( a < b ? a : b );
		cout << max/min << endl;
	}
	return 0;
}
