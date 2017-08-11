#include <iostream>

#define MAX 100001

using namespace std;

int main()
{
	int n;
	cin >> n;
	bool arr[MAX] = {false};
	int temp;
	for( int i = 0 ; i < n ; i ++ )
	{
		cin >> temp;
		arr[temp] = true;
	}
	for( int i = 1 ; i <= n ; i ++ )
		if( !arr[i] )
			cout << i << " ";
	
}
