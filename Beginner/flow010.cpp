#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char c;
		cin >> c;
		if( c == 'B' || c=='b')
			cout << "BattleShip\n";
		else if( c=='c' || c=='C')
			cout << "Cruiser\n";
		else if ( c=='d' || c=='D')
			cout << "Destroyer\n";
		else if( c=='f' || c=='F')
			cout << "Frigate\n";
	}
	return 0;
}
