#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long int n;
		cin >> n;
		unsigned long long int min = 1000001, temp;
		for(unsigned long long int i = 0 ; i < n ; i ++ )
		{
			cin >> temp;
			if( temp < min )
				min = temp;
		}
		cout << (n-1)*min << endl;
	}
}
