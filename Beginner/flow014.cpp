#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		float h, c, t;
		cin >> h >> c >> t;
		int grade = 5;
		if( h > 50 )
		{
			if( c < 0.7 )
				if( t > 5600 )
					grade = 10;
				else
					grade = 9;
			else
				if( t > 5600 )
					grade = 7;
				else
					grade = 6;
		}
		else if( c < 0.7 )
			if( t > 5600 )
				grade = 8;
			else
				grade = 6;
		else if( t > 5600 )
			grade = 6;
		cout << grade << "\n";
	}
}
