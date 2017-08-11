#include <iostream>

using namespace std;

bool ispall( int num )
{
	int rev = 0, comp = num;
	while(num)
	{
		rev *= 10;
		rev += num%10;
		num /=10;
	}
	if( comp == rev )
		return true;
	return false;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int l,r;
		cin >> l >> r;

		unsigned long long int sum = 0;

		for( int i = l ; i<=r ; i++ )
			if( ispall(i))
				sum += i;
		cout << sum << "\n";
	}
}
