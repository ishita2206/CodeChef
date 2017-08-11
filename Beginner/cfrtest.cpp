#include <iostream>
#define MAX 101

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int days[MAX] = {0}, n, temp, count = 0;
		cin >> n;
		//for( int i = 1; i < MAX ; i ++ )
		//	cout << i << days[i] <<" ";
		for(int i = 0 ; i <n; i++ )
		{
			cin >> temp;
			days[temp]++;
			//cout << temp << days[temp];
		} 
		for(int i = 1 ; i < MAX ; i++ )
		{
			if(days[i] > 1)
				count+=(days[i] - 1);
			//cout << i << days[i] << " ";
		}
		cout << n-count << "\n";
	}
	return 0;
}
