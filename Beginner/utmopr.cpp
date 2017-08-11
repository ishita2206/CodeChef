#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int k,n;
		cin >> n >> k;
		unsigned long long int sum = 0, temp;
		while(n--)
		{
			cin >> temp;
			sum += temp;
		}
		if( k == 1 )
			if(sum%2==0)
				cout << "odd\n";
			else
				cout << "even\n";
		else
			cout << "even\n";
	}
	return 0;
}
