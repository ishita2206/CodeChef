#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;
		int ones=0, consec = 0;
		bool counting_ones = false;
		for( int i = 0 ; i < str.length(); i++ )
		{
			if(str[i] == '1' )
			{
				if( !counting_ones )
				{
					counting_ones = true;				
					ones++;
				}
			}
			else
			{
				if( counting_ones )
					counting_ones = false;
			}
		}
		if( ones != 1 )
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
