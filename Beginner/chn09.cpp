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

		int a=0, b=0;

		for( int i = 0 ; i < str.length(); i++ )
		{
			if( str[i] == 'a')
				a++;
			else
				b++;
		}
		cout<< (a<b?a:b)<<"\n";
	}
	return 0;
}
