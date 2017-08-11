#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;

		int gap = 1;
		int poss = 0 ;
		for( int i = 0 ; i < n ; i ++ )
		{
			int temp;
			cin >> temp;
			if(temp == gap && i < n/2 )
				gap++;
			else if( temp == gap && i >=n/2 )
				gap --;
			else
				poss = 1;
		}
		if( poss == 1 || n%2 == 0)
			cout << "no\n";
		else cout << "yes\n";
	}
	return 0;
}
