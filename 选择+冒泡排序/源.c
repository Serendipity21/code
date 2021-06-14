#include<stdio.h>
void select_sort(long long[1000], int);
void bubble_sort(long long[1000], int);
int main()
{
	char input;
	long long data[1000] = { 0 };
	int sign = 1;
	int i = 0;
	int j = 0;
	input = getchar();
	while (input != '\n')
	{
		if (input == ' ')
		{
			data[i] *= sign;
			i++;
			sign = 1;
		}
		else if (input == '-')
			sign = -1;
		else data[i] = data[i] * 10 + input - '0';
		input = getchar();
	}
	select_sort(data, i);
	printf("\n");
	bubble_sort(data, i);
	return 0;
}

void select_sort(long long data[1000],int length)
{
	int j = 0;
	int k = 0;
	int min;
	long long buf;
	for (k = 0; k <= length; k++)
	{
		min = k;
		for (j = k + 1; j <= length; j++)
		{
			if (data[min] >= data[j])
			{
				min = j;
			}
		}
		if (min != k)
		{
			buf = data[k];
			data[k] = data[min];
			data[min] = buf;
		}
		printf("%lld ", data[k]);
	}
}

void bubble_sort(long long data[1000], int length)
{
	int j = 0;
	int k = 0;
	int buf;
	for (j = 0; j < length; j++)
	{
		for (k = 0; k < length; k++)
		{
			if (data[k] >= data[k + 1])
			{
				buf = data[k];
				data[k] = data[k + 1];
				data[k + 1] = buf;
			}
		}
	}
	for (j = 0; j <= length; j++)
	{
		printf("%lld ", data[j]);
	}
}