#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string num;
		cin >> num;
		int ones = 0 , zeros = 0;
	
		for( int i = 0 ; i < num.length(); i++ )
			if( num[i] == '1')
				ones++;
			else
				zeros++;

		if( (ones>=0 && zeros==1) || (zeros>=0 && ones== 1 ))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
