#include<stdio.h>
int main()
{
	int m, n, a, b, c, d, e, f;
	scanf_s("%d%d", &m, &n);
	if (m < n)
	{
			a = n;
			n = m;
			m = a;
	}
	c = m;
	d = n;
	do
	{
		b = m % n;
		if (b != 0)
		{
			m = n;
			n = b;
		}
	} 
	while (b != 0);
	printf("最大公约数为%d\n", n);
	e = c * d;
	f = e / n;
	printf("最小公倍数为%d\n", f);
	return 0;
}