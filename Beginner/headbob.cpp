#include <iostream>
#include <string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string gestures;
		cin >> gestures;
		int y = 0 , i = 0;

		for(int j = 0 ; j < n ; j++ )
		{
			if(gestures[j] == 'N' )
				continue;
			else if(gestures[j] == 'Y' )
			{
				cout << "NOT INDIAN\n";
				y=1;
				break;
			}
			else if(gestures[j] == 'I' )
			{
				//cout << gestures[j];
				cout << "INDIAN\n";
				y=1;
				break;
			}
		}
		if( y == 0 )
			cout << "NOT SURE\n";
	}
	return 0;
}
