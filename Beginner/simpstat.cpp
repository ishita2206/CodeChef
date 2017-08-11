//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long int arr[n];
		int k;
		cin >> k;
		for( int i = 0 ; i < n ; i ++ )
			cin >> arr[i];
		sort(arr, arr+n);
		double sum = 0;
		for( int i = k ; i < n-k ; i++ )
		{
			sum += arr[i];
		}
		sum /= (n-2*k );
		printf( "%0.6lf\n", sum);//  , cout << sum << endl;
		
	}
}
