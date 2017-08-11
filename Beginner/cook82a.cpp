#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string t[4];
		int g[4];
		int gb,gm,gr,ge;
		
		cin >> t[0] >> g[0];
		cin >> t[1] >> g[1];
		cin >> t[2] >> g[2];
		cin >> t[3] >> g[3];

		for(int i = 0; i < 4; i++ )
		{
			if( t[i][0] == 'B')
				gb = g[i];
			else if( t[i][0] == 'M')
				gm = g[i];
			else if( t[i][0] == 'R')
				gr = g[i];
			else
				ge = g[i];
		}
		
		if( gr < gm && gb > ge )
			cout << "Barcelona\n";
		else
			cout << "RealMadrid\n";
	}
}
