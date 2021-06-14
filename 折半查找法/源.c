#include<stdio.h>
int main()
{
	int a,b;
	int left = 1;
	int right = 15;
	int date[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	scanf_s("%d", &a);
	int middle = (left + right) / 2;
	int i = 0;
	for (i=0;i<4;i++)
	{
		if (a == date[middle])
		{
			b = middle+1;
			break;
		}
		else if (a > date[middle])
		{
			b = middle + 2;
		    middle = (right + middle) / 2;
			left = b - 1;
		}
		else if (a < date[middle])
		{
			b = middle;
			middle = (left + middle - 1) / 2;
			right = b + 1;
		}
	}
	if (a == date[b-1])
		printf("输入的为数组中第%d个数据\n", b);
	else printf("不在表\n");
	return 0;
}