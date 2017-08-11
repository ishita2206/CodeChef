#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int L,B;
		cin >> L >> B;

		int l = 0;
		int b = 0;
		
		int turn = 1;
		while(true)
		{
			if(turn%2 == 1 )
			{
				l+=turn;
				turn++;
				if( l > L )
				{
					cout << "Bob\n";
					break;
				}
			}
			else
			{
				b+= turn;
				turn++;
				if( b > B )
				{
					cout << "Limak\n";
					break;
				}
			}		
		}
	}
}
