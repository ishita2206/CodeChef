#include <iostream>
#define MAX 101

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int arr[MAX] = {0}, temp, c = 0;
		bool iselig[MAX] = {true};
		for(int i = 1 ; i <= n ; i ++ )
		{
			cin >> temp;
			if( temp == i )
				iselig[i] = 1;
			arr[temp]++;
		}
		for( int i = 1 ; i <= n ; i++ )
		{
			//cout << arr[i] << "." << iselig[i] << "..";
			if( arr[i] >= k && iselig[i]==0 )
				c++;
		}
		cout << c << endl;
	}
}
