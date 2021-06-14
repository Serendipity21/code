#include<stdio.h>
int main()
{
	int a = 1;
	int b = 10;
	while (b >= 2)
	{
		a = 2 * (a + 1);
		b--;
	}
	printf("第一天共摘了%d个桃子", a);
	return 0;
}