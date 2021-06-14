#include<stdio.h>
#define SIZE 10
int main()
{
	int i = 0;
	int min;
	int j;
	int buf;
	int date[SIZE];
	for (i = 0; i < SIZE; i++)
		scanf_s("%d",&date[i]);
	for (i = 0; i < SIZE; i++)
	{
		min = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if (date[min] >= date[j])
				min = j;
		}
		if (min != i)
		{
			buf = date[i];
			date[i] = date[min];
			date[min] = buf;
		}
		printf("%d ",date[i]);
	}
	return 0;
}