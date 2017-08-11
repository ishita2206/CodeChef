#include <iostream>
using namespace std;

int main()
{
  int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int n = str1.length();
		for(int i= 0; i< n ; i++)
		{
			if(str1[i] != str2[i])
				cout<<"B";
			else
			{
				if(str1[i] == 'B')
					cout<<'W';
				else
					cout<<'B';
			}
		}
		cout<<endl;
	}
	return 0;
}
