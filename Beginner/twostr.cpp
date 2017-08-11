#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string x,y;
		cin >> x >> y;
		int flg = 0;
		for( int i = 0 ; i < x.length() ; i++ )
		{
			if( x[i] == '?' || y[i] == '?' )
				continue;
			else if( x[i] != y[i] ) 
			{
				cout << "No\n";
				flg = 1;
				break;
			}
		}
		if( flg == 0 )
			cout << "Yes\n";
	}
	return 0;
}
