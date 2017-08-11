#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int r=0,b=0,g=0;
		string str;
		int n;
		cin >> n;
		cin >> str;

		for( int i = 0 ; i < n ; i++ )
			if( str[i] == 'R')
				r++;
			else if( str[i] == 'G' )
				g++;
			else
				b++;
		
		if(r >= b && r >= g )
			cout << n-r << "\n";
		else if( b >= r && b >= g )
			cout << n-b << endl ;
		else
			cout << n-g << endl;
	}
}
