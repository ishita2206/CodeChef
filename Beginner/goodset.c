#include <stdio.h>
#define MAX 100

int main()
{
	int n;
	int arr[MAX];
	arr[0] = 1;
	arr[1] = 2;
	int i,j, num, k;

	i = 2;
	num = 3;
	int can_add = 1;

	while( num <= 500 && i < MAX )
	{
		can_add = 1;
		//printf("HERE..\n");
		for( j = 1 ; j < i ; j++ )
		{
			for( k = 0 ; k < j ; k++ )
			{
				//printf("%d %d %d %d", j , k , arr[j], arr[k] );
				if ( j == k )
					continue;
				else if( arr[j] + arr[k] == num )
				{
					//printf("Breaking for %d\n", num);
					can_add = 0;
					break;
				}
			}
			if( can_add == 0 )
				break;
		}
		if(can_add == 0)
		{
			//printf("%d...", num );
			can_add = 1;
		}
		else
		{
			arr[i++] = num;
			can_add = 1;
		}
		num++;
	}	

	scanf("%d", &n);
	while(n--)
	{
		int t,i;
		scanf("%d", &t);
		for(i = 0 ; i < t ; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}

	return 0;
}
