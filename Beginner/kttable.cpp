#include <iostream>
#define MAX 10001
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		unsigned long long A[MAX];
		A[0] = 0;
		for( int i = 1 ; i <= n ; i ++ )
		{
			cin >> A[i];
		}
		unsigned long long T, counter = 0;
		for( int i = 1; i <= n ; i ++ )
		{
			cin >> T;
			if( T <= (A[i] - A[i-1]))
				counter++;
		}

		cout << counter << "\n";
	}	
	return 0;
}
