#include <iostream>
#define MAX 100001
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, index;
		cin >> n;
		unsigned long int arr[MAX], min= 1000001;
		for( int i = 0 ; i < n ; i ++ )
		{
			cin >> arr[i];
			if( arr[i] < min )
			{
				index = i;
				min = arr[i];
			}
		}
		arr[index] = arr[0];
		arr[0] = min;
		min = 1000001;
		for( int i = 1 ; i < n ; i ++ )
			if( arr[i] < min )
				min = arr[i];

		cout << min + arr[0] << endl;
	}		
}
