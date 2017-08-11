#include <iostream>

#define MAX 100000
#define ull unsigned long long int 
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int n,k;
		cin >> n >> k;

		unsigned long long int grapes[MAX];

		for( int i = 0 ; i < n ; i++ )
			cin >> grapes[i];
		unsigned long long int r,ans = 0;
		for( int i = 0 ; i < n ; i++ )
		{
			r = grapes[i] % k;
			if( grapes[i] >= k )
				ans += (r > (k-r))?(k-r):r;
			else
				ans += k-r;
		}
		cout << ans << "\n";
	}
	return 0;
}
