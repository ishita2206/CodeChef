#include <iostream>

#define MAX 21
using namespace std;

unsigned long long int fact[MAX];

void calc_fact()
{
	int n = 2;
	fact[0] = 1;
	fact[1] = 1;
	for( n = 2 ; n < MAX ; n++ )
		fact[n] = n*fact[n-1];
}

int main()
{
	calc_fact();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << fact[n] << "\n";
	}
	return 0;
}
