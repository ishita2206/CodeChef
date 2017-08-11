#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int head = 0;
		cin >> n;
		char c;
		bool valid = true;
		for( int i = 0 ; i < n ; i ++ )
		{
			cin >> c;
			if( c == 'H')
				if( head != 0 )
					valid = false;
				else
					head ++;
			else if( c == 'T' )
				head --;
		}
		if( valid && head == 0)
			cout << "Valid\n";
		else
			cout << "Invalid\n";
	}
}
