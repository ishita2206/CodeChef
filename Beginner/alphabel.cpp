#include <iostream>

#define MAX 26

using namespace std;
int main()
{
	string str;
	cin >> str;
	bool alph[MAX] = {false};

	for(int i = 0 ; i < str.length() ; i++ )
		alph[str[i] - 'a'] = true;

	int n;
	cin >> n;
	while(n--)
	{
		cin >> str;
		bool can_read = true;
		
		for ( int i = 0 ; i < str.length(); i++ )
			if( ! (alph[str[i] - 'a']))
				can_read = false;
		if( can_read )
			cout << "Yes\n";
		else
			cout << "No\n";
	} 
	return 0;
}
