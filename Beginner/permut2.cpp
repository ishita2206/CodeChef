#include <iostream>
#define MAX 100001
using namespace std;

int main()
{
	int perm[MAX];
	while(1)
	{
		int n;
		cin >> n;
		if( n == 0 )
			break;
		for ( int i = 1 ; i <= n ; i++ )
			cin >> perm[i];
		bool isambig = true;
		for( int i = 1 ; i <= n ; i++ )
		{
			if( perm[perm[i]] == i )
				continue;
			else
			{
				cout << "not ambiguous\n";
				isambig = false;
				break;
			}
		}	
		if(isambig)
			cout << "ambiguous\n";
	}
	return 0;
}
