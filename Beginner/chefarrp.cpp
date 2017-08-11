#if 1
#include <iostream>

#define MAX 50
#define unsigned long long int ull
using namespace std;

void check(int n)
{
	long long int arr[MAX];
	int i,j;
	int count = 0;
	for( i = 0 ; i < n; i++ )
		cin >> arr[i];
	long long int sum = 0, prod = 0;

	for( i = 0 ; i < n ; i++ )
	{
		sum = arr[i];
		prod = arr[i];
		for( j = i+1 ; j < n; j++ )
		{
			sum += arr[j];
			prod *= arr[j];
			if( sum == prod )
				count++;
		}
	}
	cout << count+n <<"\n";
	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		check(n);
	}
	return 0;
}
#endif

#if 0
#include<stdio.h>
#include<utility>
#include <iostream>
#define REP(i,a,b) for(int i=a; i<=b; ++i)
#define REPn(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int main ( ) 
{
	freopen("input.txt", "r", stdin);

	int t; 
	scanf("%d", &t);
	while ( t-- ) 
	{
		int n; 
		scanf("%d", &n);

		int a[n];
		pair<int, int> b[n];

		REPn(i,0,n) scanf("%d", &a[i]);

		int c=0;
		REPn(i,1,n) 
		{
			b[i-1].first = a[i-1];
			b[i-1].second = a[i-1];

			int j=i;
			while ( j<n ) 
			{
				b[j].first = b[j-1].first*a[j];
				b[j].second = b[j-1].second+a[j];

				if ( b[j].first==b[j].second ) 
					++c;
				++j;
			}
		}

		cout<<c+n<<"\n";
	}
}
#endif
