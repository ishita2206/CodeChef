#include <iostream>

#define MAX 101
#define loop for( int i = 1; i<= n; i++ )

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int L[MAX], R[MAX];
		loop
			cin >> L[i];
		loop
			cin >> R[i];
		int index=0, max_lr=0, max_r=0, multiple = 0; 
		loop
		{
			int lr = L[i]*R[i];
			if( lr > max_lr )
			{
				max_lr = lr;
				index = i;
				max_r = R[i];
			}
			else if( lr == max_lr )
			{
				if ( R[i] > max_r )
				{
					max_lr = lr;
					index = i;
					max_r = R[i];
				}
			}
		}
		cout << index << "\n";
		
	}
}
