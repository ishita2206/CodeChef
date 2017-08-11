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

		int d2 = 4*2; //8
		int d3 = 6*(n-2+m-2); //6n-12=6m-12
		int d4 = 4*(n-2)*(m-2); //4(nm-2m-2n+4) = 4nm - 8m - 8n + 16
		//int res = // 8 + 6n + 6m - 24 + 4nm - 8m - 8n + 16 = - 2m - 2n +4nm
		//if( n == 1 ):
		//	if(
		//else
			cout << (d2+d3+d4)/2 <<"\n";
	}
	return 0;
}
