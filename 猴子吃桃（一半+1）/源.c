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
	printf("��һ�칲ժ��%d������", a);
	return 0;
}