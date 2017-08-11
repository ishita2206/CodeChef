#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int d, x1, x2, x3, y1, y2, y3;
		cin >> d;
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;

		long int d1, d2, d3;
		d1 = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
		d2 = (x1-x3)*(x1-x3) + (y1-y3)*(y1-y3);
		d3 = (x2-x3)*(x2-x3) + (y2-y3)*(y2-y3);

		d = d*d;

		if( d1 <= d && d2 <= d )
			cout << "yes\n";
		else if( d1 <= d && d3 <= d )
			cout << "yes\n";
		else if( d2 <= d && d3 <= d )	
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}
