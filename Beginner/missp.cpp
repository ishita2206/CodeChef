#include <iostream>

#define MAX 100001
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		//bool doll[MAX] = {false};
		int n;
		cin >> n;
		int missing = 0;
		for( int i = 0 ; i < n ; i ++ )
		{
			int temp;
			cin >> temp;
			missing ^= temp;
			//if( doll[temp] )
			//	doll[temp] = false;
			//else
			//	doll[temp] = true; 
		}
		cout << missing << endl;
		//for( int i = 1 ; i <= n ; i ++ )
		//	if( doll[i] == true )
		//	{
		//		cout << i << endl;
		//		break;
		//	}
	}
}
