#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int n,b,m;
		cin >> n >> b >> m;
		unsigned long long counter = 0, temp;
		
		while(n)
		{
			if( n%2 == 1 )
			{
				temp = (n+1)/2;
			}
			else
				temp = n/2;
			counter += (temp*m) + b;
			m *= 2;
			n -= temp;
			
		}
		cout << counter-b << "\n";
	}
	return 0;
}
