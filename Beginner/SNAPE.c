#include <stdio.h>
#include <math.h>

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		float a,b;
		scanf("%f %f", &a, &b);
		float m1, m2;
		m2 = sqrt(a*a + b*b);
		m1 = sqrt(b*b - a*a);

		printf("%.4f %.4f\n", m1, m2);
	}
	return 0;
}
