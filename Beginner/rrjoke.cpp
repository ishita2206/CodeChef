#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while( t-- )
	{
		int n;
		cin >> n;
		int ans = 0, i = 1;
		while(n--)
		{
			int a,b;
			cin >> a >> b;
			ans ^= i;
			i++;
		}
		cout << ans << "\n";
	}
	return 0;
}
