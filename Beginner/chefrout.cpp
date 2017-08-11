#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string act;
		cin >> act;
		bool isValid = true;

		for( int i = 1 ; i < act.length() ; i ++ )
			if( act[i] < act[i-1] )
			{
				isValid = false;
				break;
			}
		if( isValid )
			cout << "yes\n";
		else
			cout << "no\n";
	}
}
