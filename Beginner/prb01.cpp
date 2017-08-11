#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int sqrtn = sqrt(n);
		int flag = 0;
		for( int i = 2 ; i < sqrtn ; i ++ )
		{
			if( n%i == 0 )
			{
				cout << "no\n";
				flag = 1;
				break;
			}
		}
		if ( flag == 0 )
			cout << "yes\n";
	}
	return 0;
}
