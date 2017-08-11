#include <iostream>

#define MAX 100001

using namespace std;

#if 0
unsigned long long int fact[MAX];

void calc_fact()
{
	fact[0] = fact[1] = 1;
	for( int i = 0 ; i <= MAX ; i++ )
		fact[i] = i*fact[i-1];
}
#endif
int main()
{
	//calc_fact();
	int t;
	cin >> t;
	while(t--)
	{
		int n, rev;
		cin >> n;
		rev = 0;
		while(n)
		{
			rev *= 10;
			rev += n%10;
			n /= 10;
		}
		cout << rev << endl;
		//cout << fact[n] << "\n";
	}
}
