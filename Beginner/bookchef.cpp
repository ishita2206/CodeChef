#include <iostream>
#define nMAX 1001
using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int a[nMAX];
	string s[nMAX];
	int f[nMAX] , p[nMAX], ind[nMAX];
	for( int i = 0 ; i < n ; i ++ )
		cin >> a[i];
	for( int i = 0 ; i < m ; i ++ )
	{
		cin >> f[i] >> p[i] >> s[i];
		ind[i] = i;
	}
	
	for( int i = 0 ; i < m-1 ; i ++ )
		for( int j = 0 ; j < m - i - 1 ; j ++ )
			if( p[ind[j]] < p[ind[j+1]] )
			{
				int t = ind[j];
				ind[j] = ind[j+1];
				ind[j+1] = t;
			}
	
	for( int i = 0 ; i < m ; i ++ )
		for( int j = 0 ; j < n ; j ++ )
			if( a[j] == f[ind[i]] )
			{
				cout << s[ind[i]] << endl;
				p[ind[i]] = -1;
			}
	for( int i = 0 ; i < m ; i ++ )
		if( p[ind[i]] >= 0 )
			cout << s[ind[i]] << endl;
}
