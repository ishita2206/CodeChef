#include <iostream>

#define MAX 26

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1;
		string s2;
		cin >> s1 >> s2;
		bool isp = false;
		int count[MAX] = {0};
		for(int i = 0 ; i < s1.length() ; i++ )
			count[s1[i] - 'a'] ++;
		for(int i = 0 ; i < s2.length() ; i++ )
			if( count[s2[i] - 'a'] != 0 )
			{
				cout << "Yes\n";
				isp = true;
				break;
			}
		if( isp == false )
			cout << "No\n";
	}
	return 0;
}
