#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		float a;
		scanf("%f", &a);
		int num = (int)(sqrt(a));
		printf("%d\n", num);
	}
	return 0;
}
