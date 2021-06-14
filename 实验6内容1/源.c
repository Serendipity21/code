#include<stdio.h>
#include<math.h>
int main(void)
{
	int a;
	scanf_s("%d", &a);
	void judge(int);
	judge(a);
	return 0;
}
void judge(int x)
{

	int b, c, d;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			printf("%d不是素数", x);
			return;
		}
	}
		printf("%d是素数", x);
}
