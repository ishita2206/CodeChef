#include <iostream>
#define MAX 101

using namespace std;

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		int house[MAX] = {0};
		//for(int i = 1 ; i < MAX ; i++ )
		//	cout << i << house[i] << " ";
		int m,x,y;
		cin >> m >> x >> y;
		int count = 0, temp, range = x*y;
		for( int i = 0 ; i < m ; i++ )
		{
			cin >> temp;
			house[temp] = 1;
			for( int j = 1 ; j < MAX; j++)
			{
				if( j >= temp-range && j <= temp+range )
					house[j] = 1;
			}
		}
		for( int i = 1 ; i < MAX; i++ )
		{
			if(house[i] == 0 )
				count++;
			//cout << i << house[i] << " ";
		}
		cout << count << "\n";
	}	

	return 0;
}
