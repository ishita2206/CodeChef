#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, sum;
		cin >> n;
		sum = 0;
		while(n)
		{
			sum += n%10;
			n/=10;
		}
		cout << sum << "\n";
	}
	return 0;
}
