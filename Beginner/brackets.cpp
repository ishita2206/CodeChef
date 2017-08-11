#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a;
		cin >> a;
		int m;
		int bal = 0;
		int max_bal = 0;
		for( int i = 0 ; i < a.length() ; i++ )
		{
			if(a[i] == '(' )
				bal++;
			else if( a[i] == ')' )
				bal--;
			max_bal = (bal > max_bal ? bal : max_bal );
		}
		for( int i = 0; i < max_bal ; i++)
			cout << "(";
		for( int i = 0 ; i < max_bal ; i++ )
			cout << ")";
		cout << "\n";
	}
	return 0;
}
