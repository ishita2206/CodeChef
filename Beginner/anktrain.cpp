#include <iostream>

using namespace std;

int main()
{
	int temp;
	cin >> temp;
	while(temp--)
	{
		int n, t;
		cin >> n;
		t = n;
		n %= 8;
		switch(n)
		{
			case 1: cout << (t+3) << "LB\n"; 
				break;
			case 2: cout << (t+3) << "MB\n";
				break;
			case 3: cout << (t+3) << "UB\n";
				break;
			case 4:	cout << (t-3) << "LB\n";
				break;
			case 5:	cout << (t-3) << "MB\n";
				break;
			case 6:	cout << (t-3) << "UB\n";
				break;
			case 7: cout << (t+1) << "SU\n";
				break;
			case 0: cout << (t-1) << "SL\n";
				break;
		}
	}
}
