#include <iostream>
using namespace std;
int gcd( int m , int n )
{
	if ( n == 0 )
		return m;
#if 0
	if ( m == 0 )
		return n;
	if ( m < n )
		return gcd( m , n%m );
#endif
	return gcd( n , m%n );
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;

		int counter = gcd(n,m);
		cout << (n/counter)*(m/counter) << "\n";
		
	}
	return 0;
}
