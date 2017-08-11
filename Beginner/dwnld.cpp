#include <iostream>
#define MAX 10
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int D[MAX];
		int T[MAX];
		int n,k;
	
		cin >> n >> k;
		int i=0, ti, di;
		int time = 0, cost = 0;
		while( time < k && i < n )
		{
			cin >> ti >> di;
			time += ti;
			i++;
		}
		if ( time > k )
		cost = (time-k)*di;
		while( i < n )
		{
			cin >> ti >> di;
			cost += ti*di;
			i++;
		}
		cout << cost << "\n" ;
	}
	return 0;
}
