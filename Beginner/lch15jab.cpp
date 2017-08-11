#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int count[26]={0};
		int i;
		string str;
		cin >> str;
		for(i=0; i< str.length(); i++)
		{
			int index = str[i] - 'a';
			count[index]++;
		}
		int flag = 0;
		if ( str.length() % 2 == 1 )
		{
			cout << "NO\n";
			continue;
		}
		//int max = (str.length()%2 == 1 ? str.length()/2+1 : str.length()/2);
		for(i=0; i<26;i++)
		{
			//cout << i << count[i] << "..";
			if(count[i] == str.length()/2)
			{
				cout << "YES\n";
				flag = 1;
				break;
			}
		}
		if( flag == 0 )
			cout << "NO\n";
	}
	return 0;
}
