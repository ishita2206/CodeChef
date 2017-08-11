#include <stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int num,rev = 0, copy;
		scanf("%d",&num);
		copy = num;
		while(copy)
		{
			rev *=10;
			rev+= copy%10;
			copy/=10;
		}
		if( num == rev )
			printf("wins\n");
		else
			printf("losses\n");
	}
	return 0;
}
