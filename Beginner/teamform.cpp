#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		if ( (n-2*m)%2 == 0 )
			cout << "yes\n";
		else
			cout << "no\n";
		while(m--)
		{
			int a,b;
			cin >> a >> b;
		}
	}
	return 0;
}
