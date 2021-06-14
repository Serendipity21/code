#include<stdio.h>

long long fact(int x)
{
	long long result=1;
	while (x != 0)
	{
		result = result * x;
		x = x - 1;
	}
	return result;
}
int main()
{
	long long a=0;
	int b = 20;
	while (b > 0)
	{
		a += fact(b--);
	}
	printf("%lld", a);
}
