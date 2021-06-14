#include<stdio.h>
void turn(int date[3][3]);
int main(void)
{
	int date[3][3];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf_s("%d", &date[i][j]);
		}
	}
	turn(date);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", date[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void turn(int date[3][3])
{
	int(*p)[3] = date;
	int buf;
	for (int i = 0; i < 3; i++)
	{
		for (int j = i; j < 3; j++)
		{
			buf = *(*(p + i) + j);
			*(*(p + i) + j) = *(*(p + j) + i);
			*(*(p + j) + i) = buf;
		}
	}
}