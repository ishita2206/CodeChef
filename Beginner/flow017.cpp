#include <iostream>
using namespace std;

int main()
{
	unsigned long int a,b,c;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> a >> b >> c;
		if ( a > b )
		{
			if( b > c )
				cout << b << "\n";
			else if( a > c )
				cout << c << "\n";
			else
				cout << a << "\n";
		}
		else
		{
			if(a > c)
				cout << a <<"\n";
			else if ( c > b )
				cout << b << "\n";
			else
				cout << c << "\n";
		}
	}
	return 0;
}
