#include<stdio.h>
#include<math.h>
int main()
{
	printf("100����\n");
	int i;
	int n;
	for (i = 2; i <= 100; i++)
	{
		for (n = 2; n <= sqrt(i); n++)
			if (i % n == 0 && i != 2)
				break;
		if (i % n == 0 && i != 2)
			continue;
		printf("%d  ", i);
	}
	printf("\nΪ����");
	return 0;
}