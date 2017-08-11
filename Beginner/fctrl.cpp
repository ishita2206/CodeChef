#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long int n;
		cin >> n;
		unsigned long int zeros = 0, temp = 0, init = 5;
		while(true)
		{
			temp = n/init;
			if( temp == 0 )
				break;
			zeros += temp;
			init *= 5;
		}
		cout << zeros << endl;
	}
}
