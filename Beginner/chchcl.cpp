#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long int n,m, nm;
		cin >> n >> m;
		nm = n*m;
	
		if( nm % 2 == 0 )
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}
