#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long int a,b;
		cin >> a >> b;
		if ( (a-b) == 2 || (b-a) == 2 )
			cout << "YES\n";
		else if( a%2 && (b-a) == 1 )
			cout << "YES\n";
		else if( a%2 == 0 && (a-b) == 1 )
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}
