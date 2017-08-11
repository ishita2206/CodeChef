#include <stdio.h>
#define MAX 1000000000
#define MOD 1000000007

long int mod( long int num )
{
	num %= MOD;
	num = (num<0? num+MOD : num);
	printf("%ld\n", num );
}

void find_fib( long int A, long int B, long int n )
{
	long int X = (B-A);
	if( n % 3 == 0 )
		if( n%2 )
			mod(X);
		else
			mod(-X);
	else if ( n%3 == 1 )
		if( n%2 )
			mod(A);
		else
			mod(-A);
	else
		if( n%2 )
			mod(-B);
		else
			mod(B);
	
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long int A,B, n;
		scanf("%ld %ld %ld", &A, &B, &n);
		find_fib(A,B,n);
	}
	return 0;
}

