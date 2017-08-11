#include <stdio.h>

int main()
{
	int arr[] = {2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int num = 0;
		unsigned long long amt = 0;
		scanf("%lld", &amt);
		int i = 0;
		while(amt)
		{
			//printf("%d %d..\n",arr[i], i); 
			if(amt >= arr[i] )
			{
				num += amt/arr[i];
				amt %= arr[i];
				//printf("%d %lld %d...", num, amt, arr[i]);
			}
			i++;
		}
		printf("%d\n", num);
	}
	return 0;
}
