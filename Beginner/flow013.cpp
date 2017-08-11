#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,c;
		cin >> a >> b >> c;
		if ( a==0 || b==0 || c==0 )
			cout << "NO\n";
		else if( a+b+c == 180 )
			cout << "YES\n";
		else
			cout << "NO\n";	
	}
	return 0;
}
