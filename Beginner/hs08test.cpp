#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	double y;
	int x;
	cin >> x >> y;

	if( x%5 == 0 && (y-x) >= 0.5 )
		printf("%.2lf\n", (y-x-0.5));
		//cout << setprecision(2)<< (y-x-0.5) << endl;
	else
		printf("%.2lf\n",y);
		//cout << setprecision(2) << y << endl;

	return 0;
}
