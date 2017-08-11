#include <iostream>

using namespace std;

int main()
{
	int n,q;
	cin >> n >> q;
	unsigned long long int temp, min = 1000000001, max = 0;
	while(n--)
	{
		cin >> temp;
		if( temp > max )
			max = temp;
		if( temp < min )
			min = temp;
	}
	while(q--)
	{
		cin >> temp;
		if( temp >= min && temp <= max )
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
