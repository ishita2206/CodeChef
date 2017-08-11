#include <iostream>
#define MAX 1001
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int count[MAX] = {0};
		int n;
		cin >> n;
		int temp;
		while(n--)
		{
			cin >> temp;
			count[temp]++;
		}
		int l=0, b = 0;
#if 0
		for( int i = MAX-1; i > 0 ; i -- )
		{
			if( count[i] > 3 )
			{
				n1 = n2 = i;
				break;
			}
			else if( count[i] > 1 )
				if( n1 == 0 )
					n1 = i;
				else
				{
					n2 = i;
					break;
				}
		}
		if( n1 == 0 || n2 == 0 )
			cout << "-1\n";
		else
			cout << n1*n2 << endl;
#endif
		for(int i=MAX-1 ; i>0 ; i--)
		{
			if(count[i]>=4)
			{   
				if(i>l)
				l=i;
				b=i;
			}
			if(count[i]>1)
			{
				if(i>l)
					l=i;
				else 
				{
					if(i>b)
						b=i;
				}
			}
			if((l>0)&&(b>0))
				break;
		}
		if((l*b)>0)
			cout << l*b << endl;
		else
			cout<<"-1\n";
	}
}
