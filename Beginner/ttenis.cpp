#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string goals;
		cin >> goals;

		int ones=0, zeros=0;
		bool tens = false;
		
		for( int i = 0 ; i < goals.length() ; i++ )
		{
			if( goals[i] == '1')
				ones++;
			else
				zeros++;
			if( ones == 10 && zeros == 10 )
				tens = true;
		}
		if( ones-zeros >=2 ) //&& tens == true )
			cout << "WIN\n";
		//else if( ones == 11 && zeros != 10)
		//	cout << "WIN\n";
		else
			cout << "LOSE\n";
	}
}
