#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,k,diff;
		cin >> n >> m >> k;
		diff = (n-m);
		if( diff < 0 )
			diff = -diff;
		if(diff > k )
			cout << diff-k << endl ;
		else
			cout << "0\n";
	}
}
