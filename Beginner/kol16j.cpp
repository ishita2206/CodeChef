#include <iostream>

#define MAX 101
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int prev=0, curr;
		int sum1 = 0, sum2 = 0;
		for( int i = 0 ; i < n ; i ++ )
		{
			cin >> curr;
			sum1 += curr;
			if( curr == prev + 1 )
				sum2 ++;
			prev = curr;	
		}
		if ( sum1 == (n*(n+1)) / 2 )
			if( sum2 == n )
				cout << "no\n";
			else
				cout << "yes\n";
		else
			cout << "no\n";
	}
}
