#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double num;
		cin >> num;

		double height = sqrt( 1 + 8*num );
		height -= 1;
		height /= 2;

		cout << (unsigned long long int)height << "\n";
	}
	return 0;
}
