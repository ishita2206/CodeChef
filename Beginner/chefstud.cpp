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
		string rev = "";
		cin >> str;

		int i;
#if 0
		for( i = 0 ; i < str.length(); i++)
			if(str[i] == '<' )
				rev+='>';
			else if( str[i] == '>')
				rev += '<';
			else
				rev += str[i];
#endif		
		int counter = 0;
		for( i = 0 ; i < str.length(); i++)
		{
			if( str[i+1] == '>' && str[i] =='<')
			{
				counter++;
				i++;
			}
		}
		cout << counter <<"\n";
	}
	return 0;
}
