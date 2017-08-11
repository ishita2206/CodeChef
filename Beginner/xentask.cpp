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
		unsigned long long int t1 = 0, t2 = 0, ti;
		for( int i = 0 ; i < n ; i ++ )
		{
			cin >> ti;
			if( i%2 )
				t1+= ti;
			else
				t2+= ti;
		}
		for( int i = 0 ; i < n ; i ++ )
		{
			cin >> ti;
			if( i%2 )
				t2 += ti;
			else
				t1 += ti;
		}
		cout << (t1 < t2 ? t1 : t2 ) << endl ;
	}
}
