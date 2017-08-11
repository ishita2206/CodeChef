#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while(t--)
	{
		int b ;
		cin >> b;
		b /= 2;

		unsigned long long ans = b * (b-1);
		ans /= 2;
		cout << ans << "\n" ;
	}
	return 0;
}
