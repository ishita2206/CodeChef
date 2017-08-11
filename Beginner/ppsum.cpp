#include <iostream>

using namespace std;
void sum(int d, int n)
{

	int temp = (n)*(n+1);
	temp/=2;
	if( d == 1 )
		cout << temp << "\n";
	else
		sum(d-1, temp );
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int d,n;
		cin >> d >> n;
		sum(d,n);
	}
	return 0;
}
