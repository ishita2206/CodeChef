#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str;
		cin >> str;

		int i;
		int ctr = 0;
		for( i = 0 ; i < str.length(); i++ )
		{
			if(str[i] == '4' )
				ctr++;
		}
		cout << ctr << "\n";
	}
	return 0;
}
