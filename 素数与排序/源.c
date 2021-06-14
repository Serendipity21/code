#include<stdio.h>
#include<math.h>
int  main (void)
{
	int j, i, k = 0, t, c[20] = { 0 }, min;
	int a[20];
	//int a[10] = { 10,9,21,7,5,4,11,35,2,100 };
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (i = 0; i < 10; i++)
	{
		for (j = 2; j <= sqrt(a[i]); j++)
		{
			if (a[i] % j == 0)
				break;
		}
		if (j > sqrt(a[i]) && a[i] != 1)
		{
			c[k] = a[i];
			k++;
		}
	}
	if (k == 0)
		printf("No prime");
	else
	{
		for (i = 0; i < k ; i++)
		{
			 min = i;
			 for (j = i + 1; j < k ; j++)
			 {
				 if (c[min] > c[j])
				 {
					 min = j;
				 }
			 }
			 if (min != i)
			 {
				 t = c[min];
				 c[min] = c[i];
				 c[i] = t;
			 }
		}
		for (i = 0; i < k; i++)
			printf("%d ", c[i]);
	}
}