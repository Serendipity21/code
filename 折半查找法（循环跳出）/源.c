#include<stdio.h>
int main()
{
	int a, b;
	int left = 0;
	int right = 14;
	int date[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	scanf_s("%d", &a);
	int middle = (left + right) / 2;
	int i = 0;
         while (1)
	{
		if (a == date[middle])
		{
			b = middle + 1;
			break;
		}
		else if (a > date[middle])
		{
			b = middle + 2;
			middle = (right + middle + 1) / 2;
			left = b - 2;
		}
		else if (a < date[middle])
		{
			b = middle;
			middle = (left + middle - 1) / 2;
			right = b ;
		}
		if (right - left <= 1) 
		{
			if (a == date[right]) b = right + 1;
			else if (a == date[left]) b = left + 1;
			break;
		}
	}
	if (a == date[b - 1])
		printf("输入的为数组中第%d个数据\n", b);
	else printf("不在表\n");
	return 0;
}