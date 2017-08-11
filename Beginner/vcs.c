#include <stdio.h>
#include <string.h>
#define MAX 101

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int M[MAX], K[MAX];
		memset(M, 0, sizeof(M));
		memset(K,0,sizeof(K));
		int m,k,n;
		scanf("%d %d %d", &n, &m, &k);
		int i,j,l;
		for( i = 0 ; i < m ; i++ )
		{
			scanf("%d", &j);
			M[j] = 1;
		}
		for( i = 0 ; i < k ; i ++ )
		{
			scanf("%d", &j);
			K[j] = 1;
		}
		j = l = 0;
		for(i = 1 ; i <= n ; i++ )
		{
			if( M[i] == K[i] )
			{
				if(M[i] == 1 )
					j++;
				else
					l++;
			}
		}
		printf("%d %d\n", j, l);
	}
	return 0;
}
