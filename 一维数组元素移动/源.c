#include<stdio.h>
int main(void)
{
	int a[6], c[6][6], i, j, t;
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			c[i][j] = a[j];
		}
		t = a[0];
		for (j = 0; j < 5; j++)
		{
			a[j] = a[j + 1];
		}
		a[5] = t;
	}
	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}