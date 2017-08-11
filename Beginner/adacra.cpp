#include <iostream>
#include <string>

using namespace std;

void print_min()
{
	string str;
	cin>>str;
	int up = 0, down = 0;
	char prev = 'U';
	
	if(str[0] == 'U')
	{
		prev = 'U';
		up++;
	}
	else
	{	
		down++;
		prev = 'D';	
	}
	
	for ( int i = 1 ; i < str.length(); i++ )
	{
		if( str[i] == prev )
		{
			continue;
		}
		else
		{
			prev = str[i];
			if(prev == 'D')
				down++;
			else
				up++;
		}
		
	}
	
	if( up == 0 || down == 0)
		cout<<"0\n";
	else
		cout<<min(up,down)<<"\n";
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		print_min();
	}
	return 0;
}
