#include <iostream>
#define ull unsigned long long int

using namespace std;

int main()
{
	unsigned long int t,k;
	cin >> t >> k;
	ull count = 0 , temp;
	while(t--)
	{
		cin >> temp;
		if( temp % k == 0 )
			count++;
	}
	cout << count;
	return 0;
}
