#include <iostream>
#include <cstring>
#define MAX 101
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k, t1;
		cin >> n >> k;
		
		string words[MAX], word;
		bool w[MAX] = {false};
		for( int i = 0 ; i < n ; i ++ )
			cin >> words[i];
		while(k--)
		{
			cin >> t1;
			for( int i = 0 ; i < t1 ; i++ )
			{
				cin >> word;
				for( int j = 0 ; j < n ; j++ )
				{
					if(word == words[j])
						w[j] = true;
				}
			}
		}
			
		for( int i = 0 ; i < n ; i++ )
			if( w[i] )
				cout << "YES ";
			else
				cout << "NO ";
		cout << "\n";
	}
	return 0;
}
