#include<stdio.h>
int main()
{
	long long c = 0, e = 1;
	int b = 20;
	int d;
	while (b >= 1)
	{
		d = b;
		e = 1;
		while (d >= 1)
		{
			e = e * d;
			d = d - 1;
		}
		b = b - 1;
		c += e;
	}
	printf("%lld", c);
	return 0;
}