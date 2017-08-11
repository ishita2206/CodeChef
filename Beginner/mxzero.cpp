#include <iostream>
#define MAX 100000

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		bool arr[MAX];
		int n;
		cin >> n;
		bool XOR = 0;
		for( int i = 0 ; i < n ; i++)
		{
			cin >> arr[i];
			XOR ^= arr[i];
		}
		int counter = 0;
		for( int i = 0 ; i < n ; i++)
		{
			bool txor = arr[i]^XOR;
			if( !txor )
				counter ++;
		}
		cout << counter << "\n";
	}
	return 0;
}
